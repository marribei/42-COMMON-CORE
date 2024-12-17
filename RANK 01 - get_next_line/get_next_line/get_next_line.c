/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:41:36 by marribei          #+#    #+#             */
/*   Updated: 2024/12/17 23:45:21 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE];
	char			*line;
	char			*temp_line;
	long			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		if (*buffer == '\0')
			bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
			return (NULL);
		temp_line = extract_line(buffer);
		if (!temp_line)
			return (NULL);
		line = ft_strjoin(line, temp_line);
		free (temp_line);
		update_buffer(buffer);
		if (*buffer == '\0')
			break ;
	}
	return (line);
}

/*int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
//	fd = 0;
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free (line);
	}
	close (fd);
	return (0);
}*/
