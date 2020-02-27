#include <stdio.h>
#include <string.h>
#include <ctype.h>

static void     init_buffer(char buffer[26])
{
    for (int c = 'a'; c <= 'z'; c++)
        buffer[c - 'a'] = c;
}

static void     print_buffer(char buffer[26])
{
    for (int i = 0; i < 26; i++)
        printf("buffer[%2d]: %c == %d\n", i, (isprint(buffer[i])) ? buffer[i] : '.', buffer[i]);
}

int             main()
{
    char    buffer[26];

    init_buffer(buffer);
    printf("Right now buffer contains:\n\n");
    print_buffer(buffer);
    printf("\nand is NOT zero-terminated.\n\n");
    printf("Let's copy something to it with our cool new function!\n\n");
    printf("> strncpy(buffer, \"Foo\", 4);\n\n");
    printf("If all went well, we should see the buffer containing \n");
    printf("string \"Foo\" at the beggining of it and the 4-th \n");
    printf("char is zero, as the src was zero terminated.\n\n");
    print_buffer(strncpy(buffer, "Foo", 4));
    init_buffer(buffer);
    printf("\nNow let's try setting the copy size LARGER than\n");
    printf("the size of the src string.\n\n");
    printf("> strncpy(buffer, \"Foo\", 25);\n\n");
    print_buffer(strncpy(buffer, "Foo", 25));
    init_buffer(buffer);
    printf("\nAs you can see, the function padded the missing\n");
    printf("characters with zero. The 26-th char is still present.\n");
    printf("\nAnd for the last example, let's copy a substring.\n\n");
    printf("> strncpy(buffer, \"Foo Bar\", 4);\n\n");
    print_buffer(strncpy(buffer, "Foo Bar", 4));
    printf("\nThe function copied 4 chars from string \"Foo Bar\", ");
    printf("no zeros were added.\n");
    return (0);
}
