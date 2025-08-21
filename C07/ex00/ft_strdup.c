/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:45:18 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/16 18:20:49 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	string_length(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	ft_strcpy(char *str, char *dest)
{
	int	index;

	index = 0;
	while (str[index])
	{
		dest[index] = str[index];
		index++;
	}
	dest[index] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*duplicated;

	duplicated = malloc(sizeof(char) * string_length(src) + 1);
	if (duplicated == 0)
		return (0);
	ft_strcpy(src, duplicated);
	return (duplicated);
}
