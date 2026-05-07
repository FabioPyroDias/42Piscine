/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:47:11 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/13 21:35:08 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *string)
{
	int	character_index;

	character_index = 0;
	while (string[character_index])
	{
		write(1, &string[character_index], 1);
		character_index++;
	}
	write(1, "\n", 1);
}

int	compare_parameters(char *parameter1, char *parameter2)
{
	int	character_index;

	character_index = 0;
	while (parameter1[character_index] && parameter2[character_index])
	{
		if (parameter1[character_index] != parameter2[character_index])
			return (parameter1[character_index] - parameter2[character_index]);
		character_index++;
	}
	return (parameter1[character_index] - parameter2[character_index]);
}

void	swap_parameters(char *argv[], int parameter1, int parameter2)
{
	char	*aux;

	aux = argv[parameter1];
	argv[parameter1] = argv[parameter2];
	argv[parameter2] = aux;
}

int	main(int argc, char *argv[])
{
	int	parameter_index;

	parameter_index = 1;
	while (parameter_index < argc - 1)
	{
		if (compare_parameters(argv[parameter_index],
				argv[parameter_index + 1]) > 0)
		{
			swap_parameters(argv, parameter_index, parameter_index + 1);
			parameter_index--;
			if (parameter_index < 1)
				parameter_index = 1;
		}
		else
			parameter_index++;
	}
	parameter_index = 1;
	while (parameter_index < argc)
	{
		print_string(argv[parameter_index]);
		parameter_index++;
	}
	return (0);
}
