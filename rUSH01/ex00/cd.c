/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:39:32 by gnogueir          #+#    #+#             */
/*   Updated: 2025/08/10 13:44:18 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		**create_grid(int size);
void	print_grid(int **grid, int size);
void	set_value(int **grid, int row, int col, int value);
void	free_grid(int **grid);

int	*check_input(char input_received[])
{
	int	input_size;
	int	*input;
	int	index;
	int	current_character;

	input_size = 16;
	input = malloc(sizeof(int) * input_size);
	index = 0;
	current_character = 0;
	while (input_received[current_character])
	{
		if (input_received[current_character] >= '1'
			&& input_received[current_character] <= '4')
		{
			input[index] = (int)input_received[current_character] - '0';
			index++;
		}
		else if ((input_received[current_character] >= '5'
				&& input_received[current_character] <= '9')
			|| input_received[current_character] == '0')
			return (NULL);
		current_character++;
	}
	if (index != input_size)
		return (NULL);
	return (input);
}

int	validate_input(int input[])
{
	int	input_size;
	int	input_index;

	input_size = 16;
	input_index = 0;
	while (input_index < input_size)
	{
		printf("%d: %d\n", input_index, input[input_index]);
		switch (input[input_index])
		{
		case 1:
			if (input[input_index + 4] == 1)
				return (1);
			break ;
		case 2:
			if (input[input_index + 4] == 4)
				return (1);
			break ;
		case 3:
			if (input[input_index + 4] == 3 || input[input_index + 4] == 4)
				return (1);
			break ;
		case 4:
			if (input[input_index + 4] != 1)
				return (1);
			break ;
		}
		if (input[input_index] + input[input_index + 4] > 5)
			return (1);
		input_index++;
		if (input[input_index] % 4 == 0)
			input_index += 4;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	*input;
	int	**grid;

	if (argc < 2)
	{
		write(1, "Erro\n", 5);
		return (0);
	}
	input = check_input(argv[1]);
	if (validate_input(input))
	{
		write(1, "Erro\n", 5);
		return (0);
	}
	if (input == NULL)
	{
		write(1, "Erro\n", 5);
		return (0);
	}
	grid = create_grid(4);
	set_value(grid, 3, 2, 5);
	print_grid(grid, 4);
	free_grid(grid);
	return (0);
}

/*
O que fazer:
	1. Validar input.
		Saber se as "clues" sao validas com o seu oposto.  DONE
			1-2 ; 1-3 ; 1-4; 2-1 ; 2-2; 2-3; 3-1; 3-2; 4-1
		Saber se a combinacao das "clues" sao validas.























*/