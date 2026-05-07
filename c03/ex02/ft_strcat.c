/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:41:59 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/11 19:28:37 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_length;
	int	index;

	dest_length = 0;
	index = 0;
	while (dest[dest_length])
		dest_length++;
	while (src[index])
	{
		dest[index + dest_length] = src[index];
		index++;
	}
	dest[index + dest_length] = '\0';
	return (dest);
}
