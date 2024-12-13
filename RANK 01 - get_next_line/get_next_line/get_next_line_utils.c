/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:13:53 by marribei          #+#    #+#             */
/*   Updated: 2024/12/08 19:43:33 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	newline_check_and_null(char *buffer)
{
	int		check;
	char	*newline;

	check = 0;
	newline = buffer;
	while (*buffer)
	{
		if (check == 1)
		{
			*newline = *buffer;
			newline++;
		}
		else if (*buffer == '\n')
			check = 1;
		*buffer++ = '\0';
	}
	return (check);
}

size_t	newline_len(char *buffer)
{
	size_t	i;

	i = 0;
	if (!buffer)
		return (0);
	while (buffer[i] != '\n' && buffer[i])
		i++;
	return(i + (buffer[i] == '\n'));
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = newline_len(s1);
	s2_len = newline_len(s2);
	newstr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s1_len)
		newstr[j++] = s1[i++];
	free (s1);
	i = 0;
	while (i < s2_len)
		newstr[j++] = s2[i++];
	newstr[j] = '\0';
	return (newstr);
}

