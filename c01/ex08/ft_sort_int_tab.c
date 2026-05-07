/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:14:31 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/11 12:03:10 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	current_index;
	int	aux;

	current_index = 0;
	while (current_index < size - 1)
	{
		if (tab[current_index] > tab[current_index + 1])
		{
			aux = tab[current_index + 1];
			tab[current_index + 1] = tab[current_index];
			tab[current_index] = aux;
			current_index--;
			if (current_index < 0)
			{
				current_index = 0;
			}
		}
		else
		{
			current_index++;
		}
	}
}
