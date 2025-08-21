/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:12:55 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/04 13:02:12 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int first_number, int second_number)
{
	char	first_number_first_digit;
	char	first_number_second_digit;
	char	second_number_first_digit;
	char	second_number_second_digit;

	first_number_first_digit = first_number / 10 + '0';
	first_number_second_digit = first_number % 10 + '0';
	second_number_first_digit = second_number / 10 + '0';
	second_number_second_digit = second_number % 10 + '0';
	write(1, &first_number_first_digit, 1);
	write(1, &first_number_second_digit, 1);
	write(1, " ", 1);
	write(1, &second_number_first_digit, 1);
	write(1, &second_number_second_digit, 1);
	if (first_number != 98 || second_number != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number < 99)
	{
		second_number = first_number + 1;
		while (second_number < 100)
		{
			print_number(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}
