/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:51:05 by rywang            #+#    #+#             */
/*   Updated: 2018/10/27 20:54:29 by rywang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printsol(int board[8][8])
{
	int r;
	int c;

	r = 0;
	while (r < 8)
	{
		c = 0;
		while (c < 8)
		{
			if (board[r][c] == 1)
				ft_putchar(c + '1');
			c++;
		}
		r++;
	}
	ft_putchar('\n');
}

int		ft_validpos(int board[8][8], int row, int col)
{
	int shift;

	shift = 0;
	while (++shift <= row)
		if (board[row - shift][col] == 1)
			return (0);
	shift = 0;
	while ((++shift <= row) && (shift <= col))
		if (board[row - shift][col - shift] == 1)
			return (0);
	shift = 0;
	while (((row + (++shift)) < 8) && ((col - shift) >= 0))
		if (board[row + shift][col - shift] == 1)
			return (0);
	shift = 0;
	while (((row - (++shift)) >= 0) && ((col + shift) < 8))
		if (board[row - shift][col + shift] == 1)
			return (0);
	return (1);
}

int		ft_queenme(int board[8][8], int row, int *num_sols)
{
	int c;

	c = 0;
	if (row == 8)
		return (1);
	while (c < 8)
	{
		if (ft_validpos(board, row, c))
		{
			board[row][c] = 1;
			if (ft_queenme(board, (row + 1), num_sols))
			{
				ft_printsol(board);
				*num_sols += 1;
			}
			board[row][c] = 0;
		}
		c++;
	}
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int board[8][8];
	int row;
	int col;
	int num_sols;

	row = 0;
	num_sols = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	ft_queenme(board, 0, &num_sols);
}
