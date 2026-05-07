/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:44:06 by jsouza            #+#    #+#             */
/*   Updated: 2025/08/06 15:27:33 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	write(1, "1\n", 2);
	rush(5, 3);
	write(1, "\n\n\n\n\n", 5);
	write(1, "2\n", 2);
	rush(5, 1);
	write(1, "\n\n\n\n\n", 5);
	write(1, "3\n", 2);
	rush(1, 1);
	write(1, "\n\n\n\n\n", 5);
	write(1, "4\n", 2);
	rush(1, 5);
	write(1, "\n\n\n\n\n", 5);
	write(1, "5\n", 2);
	rush(4, 4);
	write(1, "\n\n\n\n\n", 5);
	write(1, "T\n", 2);
	rush(10, 5);
	return (0);
}
