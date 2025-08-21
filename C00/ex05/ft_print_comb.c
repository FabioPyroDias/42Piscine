/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:41:18 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/04 12:57:58 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_line(char first_digit, char middle_digit, char last_digit)
{
	write(1, &first_digit, 1);
	write(1, &middle_digit, 1);
	write(1, &last_digit, 1);
	if (first_digit != '7' || middle_digit != '8'
		|| last_digit != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first_digit;
	char	middle_digit;
	char	last_digit;

	first_digit = '0';
	while (first_digit < '8')
	{
		middle_digit = first_digit + 1;
		while (middle_digit < '9')
		{
			last_digit = middle_digit + 1;
			while (last_digit < ':')
			{
				write_line(first_digit, middle_digit, last_digit);
				last_digit++;
			}
			middle_digit++;
		}
		first_digit++;
	}
}
