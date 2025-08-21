/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-cruz <fda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:25:36 by fda-cruz          #+#    #+#             */
/*   Updated: 2025/08/18 20:26:31 by fda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	copy_words(char *join, char **strs, int join_index, int word_index)
{
	int	character_index;

	character_index = 0;
	while (strs[word_index][character_index])
	{
		join[join_index] = strs[word_index][character_index];
		join_index++;
		character_index++;
	}
	return (join_index);
}

int	copy_separator(char *join, char *sep, int join_index)
{
	int	separator_index;

	separator_index = 0;
	while (sep[separator_index])
	{
		join[join_index] = sep[separator_index];
		join_index++;
		separator_index++;
	}
	return (join_index);
}

void	ft_join(char *join, char **strs, int size, char *sep)
{
	int	word_index;
	int	character_index;
	int	separator_index;
	int	join_index;

	word_index = 0;
	join_index = 0;
	while (word_index < size)
	{
		character_index = 0;
		join_index = copy_words(join, strs, join_index, word_index);
		word_index++;
		if (word_index == size)
		{
			join[join_index] = '\0';
			return ;
		}
		separator_index = 0;
		join_index = copy_separator(join, sep, join_index);
	}
	join[join_index] = '\0';
}

int	count_characters(char **strs, int size, char *sep)
{
	int	word_index;
	int	character_index;
	int	count;

	word_index = 0;
	count = 0;
	while (word_index < size)
	{
		character_index = 0;
		while (strs[word_index][character_index])
		{
			count++;
			character_index++;
		}
		word_index++;
	}
	character_index = 0;
	while (sep[character_index])
		character_index++;
	count += (character_index * (size - 1));
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		word_count;

	word_count = 0;
	if (size == 0)
	{
		join = malloc(1);
		join[0] = '\0';
		return (join);
	}
	word_count = count_characters(strs, size, sep);
	join = malloc(sizeof(char) * (word_count + 1));
	ft_join(join, strs, size, sep);
	return (join);
}

/*
int	main(void)
{
	char **array = malloc(sizeof(char *));
	array[0] = malloc(sizeof(char) * 6);

	char str1[] = "Hello";
	char str2[] = "Mundo";
	char str3[] = "42";
	char str4[] = "oewjweififi";

	char *str[4];
	str[0] = str1;
	str[1] = str2;
	str[2] = str3;
	str[3] = str4;
	// str[2] = str3;

	char *joined = ft_strjoin(4, str, 	

	return (0);
} */