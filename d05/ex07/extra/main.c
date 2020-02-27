#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int     main()
{
    printf("using ft_strncmp(\"str1\", \"str2\", 3): %d\n", ft_strncmp("str1", "str2", 3));
    printf("using strncmp(\"str1\", \"str2\", 3): %d\n\n", strncmp("str1", "str2", 3));
    printf("using ft_strncmp(\"something\", \"some\", 9): %d\n", ft_strncmp("something", "some", 9));
    printf("using strncmp(\"something\", \"some\", 9): %d\n\n", strncmp("something", "some", 9));
    printf("using ft_strncmp(\"\", \"\", 9): %d\n", ft_strncmp("", "", 9));
    printf("using strncmp(\"\", \"\", 9): %d\n\n", strncmp("", "", 9));
    printf("using ft_strncmp(\"identical\", \"different\", 0): %d\n", ft_strncmp("identical", "different", 0));
    printf("using strncmp(\"identical\", \"different\", 0): %d\n\n", strncmp("identical", "different", 0));
    printf("using ft_strncmp(\"a\", \"z\", 2): %d\n", ft_strncmp("a", "z", 2));
    printf("using strncmp(\"a\", \"z\", 2): %d\n", strncmp("a", "z", 2));
    return (0);
}
