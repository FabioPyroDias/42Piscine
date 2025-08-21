/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:06:53 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/13 17:24:08 by fda-cruz         ###   ########.fr       */
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
	(void) argc;
	print_string(argv[0]);
}
