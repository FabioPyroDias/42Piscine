/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:37:14 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/16 13:40:16 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	string_length(char *string)
{
	int	length;

	length = 0;
	while (string[length])
		length++;
	return (length);
}

int	is_base_valid(char *base)
{
	int	base_length;
	int	base_index;
	int	base_compare_index;

	base_length = string_length(base);
	base_index = 0;
	while (base_index < base_length - 1)
	{
		if (base[base_index] == '-' || base[base_index] == '+')
			return (0);
		base_compare_index = base_index + 1;
		while (base_compare_index < base_length)
		{
			if (base[base_index] == base[base_compare_index])
				return (0);
			base_compare_index++;
		}
		base_index++;
	}
	if (base[base_index] == '-' || base[base_index] == '+')
		return (0);
	return (1);
}

void	convert_number(int nbr, char *base, int base_length)
{
	char	character;

	if (nbr / base_length == 0)
	{
		if (nbr < 0)
		{
			nbr -= 2 * nbr;
			write(1, "-", 1);
		}
		character = base[nbr % base_length];
		write(1, &character, 1);
		return ;
	}
	convert_number(nbr / base_length, base, base_length);
	if (nbr < 0)
		character = base[-1 * nbr % base_length];
	else
		character = base[nbr % base_length];
	write(1, &character, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	if (base[0] == '\0' || string_length(base) == 1)
		return ;
	if (!is_base_valid(base))
		return ;
	base_length = string_length(base);
	convert_number(nbr, base, base_length);
}
