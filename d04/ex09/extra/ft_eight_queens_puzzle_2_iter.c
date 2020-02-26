void    ft_print_solution(char board[9])
{
    for (int i = 1; i <= 8; i++)
        ft_putchar(board[i] + '0');
    ft_putchar('\n');
}

int     ft_is_valid(char board[9], int col)
{
    for (int i = 1; i < col; i++)
        if (board[col] == board[i] || \
            board[col] == board[i] + col - i || \
            board[col] == board[i] - col + i)
            return (0);
    return (1);
}

void    ft_eight_queens_puzzle_2(void)
{
    char    board[9] = {0};

    for (int i = 1; i <= 8; i++) {
        board[1] = i;
        for (int j = 1; j <= 8; j++) {
            board[2] = j;
            if (!ft_is_valid(board, 2))
                continue;
            for (int k = 1; k <= 8; k++) {
                board[3] = k;
                if (!ft_is_valid(board, 3))
                    continue;
                for (int l = 1; l <= 8; l++) {
                    board[4] = l;
                    if (!ft_is_valid(board, 4))
                        continue;
                    for (int m = 1; m <= 8; m++) {
                        board[5] = m;
                        if (!ft_is_valid(board, 5))
                            continue;
                        for (int n = 1; n <= 8; n++) {
                            board[6] = n;
                            if (!ft_is_valid(board, 6))
                                continue;
                            for (int o = 1; o <= 8; o++) {
                                board[7] = o;
                                if (!ft_is_valid(board, 7))
                                    continue;
                                for (int p = 1; p <= 8; p++) {
                                    board[8] = p;
                                    if (!ft_is_valid(board, 8))
                                        continue;
                                    ft_print_solution(board);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
