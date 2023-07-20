/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:22:43 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/14 18:57:48 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		++i;
		str++;
	}
	return (i);
}

/* int	main(void)
{
	char	*s;

	s = "Opa!";
	printf("%d", ft_strlen(s));
	return (0);
} */
