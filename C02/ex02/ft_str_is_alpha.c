/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:11:59 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/11 14:47:19 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	if (!str[index])
	{
		return (1);
	}
	while (str[index])
	{
		if ((str[index] < 'a' || str[index] > 'z') && (str[index] < 'A'
				|| str[index] > 'Z'))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
