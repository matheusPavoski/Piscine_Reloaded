/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:47:29 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/20 14:35:47 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"
#define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int		file_d;
	int		rtrn;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc >= 3)
		write(2, "Too many arguments.\n", 20);
	else if (argc == 2)
	{
		file_d = open(argv[1], O_RDONLY);
		if (file_d == -1)
			return (1);
		rtrn = 1;
		while (rtrn)
		{
			rtrn = read(file_d, buf, BUF_SIZE);
			buf[rtrn] = '\0';
			write(1, buf, rtrn);
		}
		if (close(file_d) == -1)
			return (1);
	}
	return (0);
}
