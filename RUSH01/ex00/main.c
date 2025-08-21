/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:44:34 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/10 16:52:00 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Logica:
	1. Valido o input com as limitacoes que ja se sabe.
	2. Crio Grid e Constraints.
	3. Recursao
		3.1. Passo Grid, Constraints, Possible_Values, Position
		3.2. Selecciono o primeiro Possible_Value e meto-o a zero.
		3.3. Chamo o proprio metodo, passando todos os argumentos,
			inclusive o Possible_Values modificado.
		3.4. Se tiver chegado ao final, verifico as Constraints.
			3.4.1. Se satisfazer criterios,
				reset nos Possible_Values e chamo novamente a propria funcao.
			3.4.2. Se nao satisfazer criterios, return -1.
		3.5. Se o return for 0 ou um dos Possible_Values, continuar...
		3.6. Se o return for -1,
			escolher um dos outros Possible_Values disponiveis e repetir o processo.
	4. Caso no final de todos os passos, tiver recebido um -1,
		nao existe solucao possivel para o puzzle. Erro.
 */

char	**create_grid(int size);
void	print_grid(int **grid, int size);
void	set_value(int **grid, int row, int col, int value);
void	free_grid(int **grid);

int	validate_constraint_col(int **grid, int **constraint, int *position)
{
	int	left_count;
	int	right_count;

	left_count = constraint[0][position[0]];
	right_count = constraint[2][position[0]];
	return (0);
}

int	validate_constraint_line(int **grid, int **constraint, int *position)
{
	int	left_count;
	int	right_count;
	int	current_index;
	int	last_big_number;
	int	number_of_buildings;

	left_count = constraint[1][position[0]];
	right_count = constraint[3][position[0]];
	current_index = 0;
	last_big_number = 0;
	while (current_index < 4)
	{
		if (grid[position[0]][current_index] > last_big_number)
		{
			last_big_number = grid[position[0]][current_index];
			number_of_buildings++;
		}
		current_index++;
	}
	if (number_of_buildings != left_count)
		return (-1);
	current_index = 0;
	last_big_number = 0;
	while (current_index < 4)
	{
		if (grid[position[0]][current_index] > last_big_number)
		{
			last_big_number = grid[position[0]][current_index];
			number_of_buildings++;
		}
		current_index++;
	}
	if (number_of_buildings != right_count)
	{
		return (-1);
	}
	return (1);
}

int	check_constraint(int **grid, int **constraints, int *position)
{
	int	leftCount;
	int	rightCount;

	if (position[0] == 3 && position[1] == 3)
	{
		// check line and col
		validate_constraint(grid, constraints, position, 1);
		validate_constraint(grid, constraints, position, 0);
	}
	else if (position[0] == 3)
	{
		// check col
	}
	else if (position[1] == 3)
	{
		validate_constraint(grid, constraints, position, 1);
	}
}

int	solve_puzzle(int **grid, int **constraints, int *possible_values,
		int *position)
{
	int	current_possible_value;

	if (position[0] == 3 || position[1] == 3)
	{
		check_constraint(grid, constraints, position);
	}
	current_possible_value = 0;
	while (current_possible_value < 4)
	{
		if (possible_values[current_possible_value] != 0)
		{
			set_value(grid, position[0], position[1],
				possible_values[current_possible_value]);
			possible_values[current_possible_value] = 0;
			if (!solve_puzzle(grid, constraints, possible_values, position))
			{
			}
		}
	}
}

int	main(int argc, char *argv[])
{
	// 1. Validar o input.
	char **grid;
	grid = create_grid(4);
	set_value(grid, 3, 2, 5);
	print_grid(grid, 4);
	free_grid(grid);

	int constraints[4][4] = {{4, 3, 2, 1}, {1, 2, 2, 2}, {4, 3, 2, 1}, {1, 2, 2,
		2}};

	int possible_values[4] = {1, 2, 3, 4};
	int position[2] = {0, 0};

	int is_valid = solve_puzzle(grid, constraints, possible_values, position);
}