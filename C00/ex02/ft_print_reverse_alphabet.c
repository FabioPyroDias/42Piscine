/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:00:27 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/04 12:54:02 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	current_letter;

	current_letter = 'z';
	while (current_letter >= 'a')
	{
		write(1, &current_letter, 1);
		current_letter--;
	}
}
