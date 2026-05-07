/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:18:27 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/14 17:02:44 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	to_find_index;

	index = 0;
	if (!to_find[index])
	{
		return (str);
	}
	while (str[index])
	{
		to_find_index = 0;
		while (str[index + to_find_index] == to_find[to_find_index])
		{
			to_find_index++;
			if (!to_find[to_find_index])
			{
				return (&str[index]);
			}
		}
		index++;
	}
	return (0);
}
