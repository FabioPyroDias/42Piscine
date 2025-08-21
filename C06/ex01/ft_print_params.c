/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:16:48 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/13 17:24:29 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		write(1, &string[index], 1);
		index++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	parameter_index;

	parameter_index = 1;
	while (parameter_index < argc)
	{
		print_string(argv[parameter_index]);
		parameter_index++;
	}
}
