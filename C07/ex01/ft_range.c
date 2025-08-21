/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:22:50 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/18 20:16:42 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*ranged_array;
	int	index;

	if (min >= max)
		return (0);
	range = max - min;
	ranged_array = malloc(sizeof(int) * range);
	index = 0;
	while (min < max)
	{
		ranged_array[index] = min;
		min++;
		index++;
	}
	return (ranged_array);
}
