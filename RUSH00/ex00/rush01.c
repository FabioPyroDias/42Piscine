/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:35:11 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/03 14:37:42 by fda-cruz         ###   ########.fr       */
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
		ft_putchar('*');
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
				draw(col, x, '/', '\\');
			else if (row == y - 1)
				draw(col, x, '\\', '/');
			else
				draw_middle_table(col, x, '*', ' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}