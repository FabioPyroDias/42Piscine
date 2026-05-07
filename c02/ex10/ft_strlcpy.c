/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:27:00 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/11 17:02:52 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_length(char *src)
{
	int	length;

	length = 0;
	while (src[length])
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	src_length;

	length = 0;
	src_length = str_length(src);
	if (size < 1)
	{
		return (src_length);
	}
	while (length < size - 1 && length < src_length)
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (src_length);
}
