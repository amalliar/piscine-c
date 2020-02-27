#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ft_strncat.c"

static void     init_buffer(char buffer[26])
{
    for (int c = 'a'; c <= 'z'; c++)
        buffer[c - 'a'] = c;
    buffer[1] = '\0';
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
    print_buffer(buffer);
    printf("\n");
    ft_strncat(buffer, "test", 0);
    print_buffer(buffer);
    printf("\n");
    init_buffer(buffer);
    ft_strncat(buffer, "test", 4);
    print_buffer(buffer);
    printf("\n");
    init_buffer(buffer);
    ft_strncat(buffer, "test", 2);
    print_buffer(buffer);
    printf("\n");
    init_buffer(buffer);
    ft_strncat(buffer, "test", 8);
    print_buffer(buffer);
    return (0);
}
