/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:52:25 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/18 11:56:05 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	ran;
	int	*arr;
	int	i;

	i = 0;
	if (min > max || min == max)
		return (NULL);
	ran = max - min;
	arr = (int *)malloc(sizeof(int) * ran);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/* #include <stdio.h>

int	main(void)
{
	int	*tmp;
	int	i;

	tmp = ft_range(20, 39);
	i = 0;
	while (i < 19)
		printf("%i\n", tmp[i++]);
	free(tmp);
	return (0);
} */
