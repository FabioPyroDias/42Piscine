/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:23:51 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/05 20:30:58 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	if (!str[index])
	{
		return (1);
	}
	while (str[index])
	{
		if (str[index] < 'a' || str[index] > 'z')
		{
			return (0);
		}
		index++;
	}
	return (1);
}
