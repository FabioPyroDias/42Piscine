/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:15:17 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/13 14:57:40 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	power;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	power = 1;
	while (power < nb)
	{
		if (power * power == nb)
			return (power);
		power++;
	}
	return (0);
}
