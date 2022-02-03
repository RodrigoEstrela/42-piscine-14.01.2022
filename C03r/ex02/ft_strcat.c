/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:47:17 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/25 16:03:37 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	f;
	int	c;

	f = 0;
	c = 0;
	while (dest[f] != '\0')
		f++;
	while (src[c] != '\0')
	{
		dest[f] = src[c];
		f++;
		c++;
	}	
	dest[f] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}*/
