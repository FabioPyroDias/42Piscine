/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:01:03 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/19 18:51:14 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_base(char *base);

int	size_of_string(int nbr, int size_of_base)
{
	int	size;

	if (nbr == 0)
		return (1);
	size = 0;
	if (nbr < 0)
		size++;
	while (nbr != 0)
	{
		nbr = nbr / size_of_base;
		size++;
	}
	return (size);
}

void	convert_to_base(char *cvrt_nbr, int size, int nbr, char *base_to)
{
	int	index;
	int	base_size;
	int	mod;

	index = size;
	base_size = validate_base(base_to);
	cvrt_nbr[index] = '\0';
	index--;
	if (nbr < 0)
		cvrt_nbr[0] = '-';
	while (nbr != 0)
	{
		mod = nbr % base_size;
		nbr = nbr / base_size;
		if (mod < 0)
			mod = -1 * mod;
		cvrt_nbr[index] = base_to[mod];
		index--;
	}
}
