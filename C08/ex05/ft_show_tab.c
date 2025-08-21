/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:50:32 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/21 11:53:37 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	print_string(char *string)
{
	int		index;

	index = 0;
	while (string[index])
	{
		write(1, &string[index], 1);
		index++;
	}
}

void	put_number(int number)
{
	char	character;

	if (number / 10 == 0)
	{
		character = (number % 10) + '0';
		write(1, &character, 1);
		return ;
	}
	put_number(number / 10);
	character = (number % 10) + '0';
	write(1, &character, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str)
	{
		print_string(par[index].str);
		write(1, "\n", 1);
		put_number(par[index].size);
		write(1, "\n", 1);
		print_string(par[index].copy);
		write(1, "\n", 1);
		index++;
	}
}

/* int	main()
{
	char	*matrix[4];

	matrix[0] = "Hello World!";
	matrix[1] = "42Lisboa";
	matrix[2] = "I am really sleepy";
	matrix[3] = "This is the last string";

	struct s_stock_str *array = ft_strs_to_tab(4, matrix);
	ft_show_tab(array);

	return 0;
} */