/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:26:15 by marribei          #+#    #+#             */
/*   Updated: 2024/11/05 14:48:43 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strings(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_word_len(const char *s, char c, int pos)
{
	size_t	i;

	i = pos;
	while (s[i] && s[i] != c)
		i++;
	return (i - pos);
}

static void	*free_array(char **array, size_t i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free (array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;

	array = (char **)malloc(sizeof(char *) * (ft_count_strings(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_count_strings(s, c))
	{
		while (s[j] == c)
			j++;
		array[i] = (char *)malloc(sizeof(char) * (ft_word_len(s, c, j) + 1));
		if (!array[i])
			free_array(array, i);
		array[i][ft_word_len(s, c, j)] = '\0';
		ft_strlcpy(array[i], &s[j], (ft_word_len(s, c, j) + 1));
		j = j + ft_word_len(s, c, j);
		i++;
	}
	array[i] = NULL;
	return (array);
}

/*int	main(void)
{
	int	i;
	char **split = ft_split("     abc  8764854     ", ' ');

	i = 0;
	while (split[i])
	{
		printf("%s$\n", split[i]);
		i++;
	}
	return (0);
}*/