/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:18:47 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/04 13:05:21 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(unsigned int nb)
{
	char	letter;

	letter = (char)(nb % 10) + '0';
	if (nb / 10 == 0)
	{
		write(1, &letter, 1);
		return ;
	}
	write_number(nb / 10);
	write(1, &letter, 1);
}

void	ft_putnbr(int nb)
{
	int	always_positive_number;

	always_positive_number = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		always_positive_number -= 2 * nb;
	}
	write_number(always_positive_number);
}
