/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:28:13 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/12 20:18:35 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nbr)
{
	char	character;

	if (nbr / 10 == 0)
	{
		if (nbr < 0)
		{
			nbr -= 2 * nbr;
			write(1, "-", 1);
		}
		character = nbr + '0';
		write(1, &character, 1);
		return ;
	}
	ft_putnbr (nbr / 10);
	if (nbr < 0)
		character = -1 * (nbr % 10) + '0';
	else
		character = nbr % 10 + '0';
	write (1, &character, 1);
}

/*int main ()
{
	//int a = 0;
	int b = -2147483648;

	//ft_putnbr(a);
	ft_putnbr(b);
	printf("\n");
	
	return 0;
} */