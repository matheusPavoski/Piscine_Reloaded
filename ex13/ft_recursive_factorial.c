/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:23:59 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/14 15:41:17 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main(void)
{
	printf("%d", ft_recursive_factorial(1));
	return (0);
} */
