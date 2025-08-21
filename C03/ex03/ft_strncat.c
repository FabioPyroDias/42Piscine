/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:53:59 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/14 15:52:46 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length;
	unsigned int	index;

	length = 0;
	index = 0;
	while (dest[length])
		length++;
	while (src[index] && index < nb)
	{
		dest[length + index] = src[index];
		index++;
	}
	dest[length + index] = '\0';
	return (dest);
}
