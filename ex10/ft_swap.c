/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:50:33 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/13 13:21:12 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/* int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 10;
	b = 20;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
	printf("%i\n%i\n", a, b);
	return (0);
} */
