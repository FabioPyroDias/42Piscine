/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:51:52 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/20 12:39:16 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_values;
	int	*array;
	int	index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range_values = max - min;
	array = malloc(sizeof(int) * range_values);
	if (array == 0)
		return (-1);
	index = 0;
	while (min < max)
	{
		array[index] = min;
		min++;
		index++;
	}
	range[0] = array;
	return (range_values);
}

/* 
int main()
{
	int *range[1]; *(*(range) + 1)
	ft_ultimate_range(range, 2, 10);
} */