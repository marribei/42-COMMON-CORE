/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:07:15 by marribei          #+#    #+#             */
/*   Updated: 2024/12/08 19:39:50 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;
	long long	bytes;
	
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		if (*buffer == '\0')
			bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free (line);
			return (NULL);
		}
		if (bytes)
				line = ft_strjoin(line, buffer);
		if (newline_check_and_null(buffer) || bytes == 0)
			break ;
	}
	return (line);
}

int main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *line;

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
