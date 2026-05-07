/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 22:34:37 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/21 11:53:22 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_strln(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*string_copy(char *str)
{
	char	*copy;
	int		index;

	index = 0;
	copy = malloc(ft_strln(str) + 1);
	while (str[index])
	{
		copy[index] = str[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	int					size;
	struct s_stock_str	*array;

	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (array == 0)
		return (0);
	index = 0;
	while (index < ac)
	{
		array[index].size = ft_strln(av[index]);
		array[index].str = av[index];
		array[index].copy = string_copy(av[index]);
		index++;
	}
	array[index].size = 0;
	array[index].str = 0;
	array[index].copy = 0;
	return (array);
}
