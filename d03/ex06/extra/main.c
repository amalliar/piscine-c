#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int     main()
{
    printf("The length of \"THIS STRING\" with strlen() is %d\n", (int) strlen("THIS STRING"));
    printf("The length of \"THIS STRING\" with ft_strlen() is %d\n", ft_strlen("THIS STRING"));
    return (0);
}
