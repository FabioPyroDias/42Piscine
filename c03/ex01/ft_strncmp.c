/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:52:05 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/14 17:05:08 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] && s2[index] && index < n)
	{
		if (s1[index] - s2[index] != 0)
			return (s1[index] - s2[index]);
		index++;
	}
	if (index == n)
		return (0);
	return (s1[index] - s2[index]);
}
