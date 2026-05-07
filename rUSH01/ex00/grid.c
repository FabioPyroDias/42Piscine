/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:55:10 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/10 15:05:13 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**create_grid(int size)
{
	int	**grid;
	int	row;
	int	col;

	grid = (int **)malloc(sizeof(int *) * size);
	row = 0;
	while (row < size)
	{
		col = 0;
		grid[row] = (int *)malloc(sizeof(int) * size);
		while (col < size)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}

void	print_grid(int **grid, int size)
{
	int		row;
	int		col;
	char	number;

	row = 0;
	col = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			number = grid[row][col] + '0';
			write(1, &number, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	set_value(int **grid, int row, int col, int value)
{
	grid[row][col] = value;
}

void	free_grid(int **grid)
{
	free(grid);
}