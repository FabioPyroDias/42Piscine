/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:29:54 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/19 18:52:43 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_of_string(int nbr, int size_of_base);
void	convert_to_base(char *cvrt_nbr, int size, int nbr, char *base_to);

int	validate_base(char *base)
{
	int	index;
	int	index_comparison;

	index = 0;
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		index_comparison = index + 1;
		while (base[index_comparison])
		{
			if (base[index] == base[index_comparison])
				return (0);
			index_comparison++;
		}
		index++;
	}
	return (index);
}

int	get_character_in_base(char *nbr, int nbr_index, char *base)
{
	int	base_index;

	base_index = 0;
	while (base[base_index])
	{
		if (nbr[nbr_index] == base[base_index])
			return (base_index);
		base_index++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base, int base_size)
{
	int	index;
	int	sign;
	int	result;

	index = 0;
	sign = 1;
	result = 0;
	while (nbr[index] && (nbr[index] == ' '
			|| (nbr[index] >= 9 && nbr[index] <= 13)))
	{
		index++;
	}
	while (nbr[index] && (nbr[index] == '-' || nbr[index] == '+'))
	{
		sign = -sign;
		index++;
	}
	while (nbr[index])
	{
		if (get_character_in_base(nbr, index, base) == -1)
			return (-1);
		result = result * base_size + get_character_in_base(nbr, index, base);
		index++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		size_base_from;
	int		size_base_to;
	int		decimal_number;
	char	*cvrt_nbr;
	int		size_cvrt_nbr;

	size_base_from = validate_base(base_from);
	size_base_to = validate_base(base_to);
	if (size_base_from < 2 || size_base_to < 2)
		return (0);
	decimal_number = ft_atoi_base(nbr, base_from, size_base_from);
	if (decimal_number == -1)
		return (0);
	size_cvrt_nbr = size_of_string(decimal_number, size_base_to);
	cvrt_nbr = malloc(sizeof(char) * size_cvrt_nbr + 1);
	convert_to_base(cvrt_nbr, size_cvrt_nbr, decimal_number, base_to);
	return (cvrt_nbr);
}
