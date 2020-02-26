/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 02:25:46 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/01 05:01:12 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static void		ft_print_solution(char board[9])
{
	int		i;

	i = 1;
	while (i <= 8)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

static int		ft_is_valid(char board[9], int col)
{
	int		i;

	i = 1;
	while (i < col)
	{
		if (board[col] == board[i] || \
			board[col] == board[i] + col - i || \
			board[col] == board[i] - col + i)
			return (0);
		i++;
	}
	return (1);
}

static void		ft_solve_puzzle(char board[9], char queens, int col)
{
	int		i;

	if (queens == 0)
	{
		ft_print_solution(board);
		return ;
	}
	i = 1;
	while (i <= 8)
	{
		board[col] = i;
		if (ft_is_valid(board, col))
			ft_solve_puzzle(board, queens - 1, col + 1);
		i++;
	}
}

void			ft_eight_queens_puzzle_2(void)
{
	char	board[9];
	int		i;

	i = 0;
	while (i < 9)
		board[i++] = 0;
	ft_solve_puzzle(board, 8, 1);
}
