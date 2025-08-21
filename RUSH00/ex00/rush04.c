/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:03:06 by jsouza            #+#    #+#             */
/*   Updated: 2025/08/03 15:08:06 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw(int col, int x, char firstEdge, char lastEdge)
{
	if (col == 0)
		ft_putchar(firstEdge);
	else if (col == x - 1)
		ft_putchar(lastEdge);
	else
		ft_putchar('B');
}

void	draw_middle_table(int col, int x, char edge, char between)
{
	if (col == 0 || col == x - 1)
		ft_putchar(edge);
	else
		ft_putchar(between);
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x < 0 || y < 0)
	{
		write(1, "Dimensions not valid\n", 21);
		return ;
	}
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if (row == 0)
				draw(col, x, 'A', 'C');
			else if (row == y - 1)
				draw(col, x, 'C', 'A');
			else
				draw_middle_table(col, x, 'B', ' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
