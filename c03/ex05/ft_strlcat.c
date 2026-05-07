/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:28:06 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/14 20:46:21 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	string_length(char *string)
{
	int	index;

	index = 0;
	while (string[index])
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	index;

	length = 0;
	index = 0;
	while (length < size && dest[length])
		length++;
	if (length == size)
		return (size + string_length(src));
	while (size - 1 && src[index] < length + index)
	{
		dest[length + index] = src[index];
		index++;
	}
	dest[length + index] = '\0';
	return (length + string_length(src));
}
