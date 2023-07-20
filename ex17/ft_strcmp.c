/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:31:19 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/17 08:34:39 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2 || *s2 > *s1)
		return (*s1 - *s2);
	else
		return (0);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Op";
	s2 = "Opa";
	printf("%s\n%s\nft_strcmp: %d\nstrcmp: %d\n", s1,
		s2, ft_strcmp(s1, s2), strcmp(s1, s2));
	return (0);
}
 */