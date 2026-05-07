/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:52:10 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/13 14:02:07 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb < 0 && power % 2 == 0)
		nb -= 2 * nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
