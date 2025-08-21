/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:15:43 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/11 14:47:25 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (!str[index])
	{
		return (1);
	}
	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
		{
			return (0);
		}
		index++;
	}
	return (1);
}
