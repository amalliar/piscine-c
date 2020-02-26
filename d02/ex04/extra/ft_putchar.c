extern char     __ACTUAL[4096];
extern int      __idx_ACTUAL;

void	ft_putchar(char c)
{
    __ACTUAL[__idx_ACTUAL++] = c;
}
