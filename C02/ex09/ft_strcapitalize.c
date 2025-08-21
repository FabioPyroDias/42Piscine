/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:58:08 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/11 14:45:55 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase_string(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
}

void	capitalize(char *str)
{
	int	index;
	int	is_to_be_uppercase;

	index = 0;
	is_to_be_uppercase = 1;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (is_to_be_uppercase == 1)
				str[index] -= 32;
			is_to_be_uppercase = 0;
		}
		else if (str[index] >= '0' && str[index] <= '9')
		{
			is_to_be_uppercase = 0;
		}
		else
		{
			is_to_be_uppercase = 1;
		}
		index++;
	}
}

char	*ft_strcapitalize(char *str)
{
	lowercase_string(str);
	capitalize(str);
	return (str);
}
