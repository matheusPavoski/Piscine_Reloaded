/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:41:36 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/20 13:54:06 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/* void	ft_print_int(int n)
{
	printf("%d\n", n);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4};

	ft_foreach(arr, 4, ft_print_int);
	return (0);
} */
