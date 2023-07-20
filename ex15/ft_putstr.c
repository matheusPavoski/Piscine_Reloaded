/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:00:50 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/14 17:21:43 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
} */

void	ft_putchar(char c);

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		ft_putchar (*str);
		str++;
	}
}

/* int	main(void)
{
	char	*s;

	s = "Opa!";
	ft_putstr (s);
	return (0);
} */
