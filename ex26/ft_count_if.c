/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:57:30 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/19 13:13:53 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

/* int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_f(char *str)
{
	if (ft_strlen(str) > 5)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char	*str[] = {"Matheus", "Oie", "Pavoski"};
	int		count;

	count = ft_count_if(str, ft_f);
	printf("Elementos que retornam 1: %d\n", count);
	return (0);
}
 */