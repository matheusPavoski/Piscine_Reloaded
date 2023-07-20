/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:57:46 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/14 13:07:09 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb >= i)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

/*  int	main(void)
{
	printf("%i\n", ft_iterative_factorial(0));
}  */
