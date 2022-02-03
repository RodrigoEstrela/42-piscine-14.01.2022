/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:03:56 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/28 12:06:08 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	f;
	unsigned int	c;

	f = 0;
	c = 0;
	while (dest[f] != '\0')
		f++;
	while (src[c] != '\0' && c < nb)
	{
		dest[f] = src[c];
		f++;
		c++;
	}
	dest[f] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890234524234";
	unsigned int nb = 8;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}
