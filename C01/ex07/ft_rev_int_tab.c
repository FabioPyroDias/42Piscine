/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:53:43 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/11 12:03:08 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	current_index;
	int	aux;

	current_index = 0;
	while (current_index < size / 2)
	{
		aux = tab[size - 1 - current_index];
		tab[size - 1 - current_index] = tab[current_index];
		tab[current_index] = aux;
		current_index++;
	}
}
