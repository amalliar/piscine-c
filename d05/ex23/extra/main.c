#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include "ft_putchar.c"
#include "ft_print_memory.c"

struct s_USER {
    time_t    last_seen;
    char      login[20];
    char      password[20];
};

int     main()
{
    printf("\033[1;32m\n");
    char    str[] = "Salut les aminches c'est cool show mem"
    " on fait de truc terrible";
    ft_print_memory(str, sizeof(str));
    printf("\n");

    char    str2[] = "This is a very long string to test the"
    " offset calculation. ----------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------"
    "-------------------------------------------------------";
    ft_print_memory(str2, sizeof(str2));
    printf("\n");

    struct s_USER user;
    user.last_seen = time(NULL);
    sprintf(user.login, "n00b");
    sprintf(user.password, "123456");
    ft_print_memory(&user, sizeof(user));

    printf("\nsizeof(unsigned long long): %d\n", \
          (int) sizeof(unsigned long long));
    unsigned long long ull_arr = 0x52454B4341487830;
    ft_print_memory(&ull_arr, sizeof(ull_arr));
    printf("\033[0m\n");
    return (0);
}
