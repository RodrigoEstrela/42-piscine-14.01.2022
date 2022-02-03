/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:52:39 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/21 09:31:45 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char source[] = "Source.";
	char destin[] = "Destination.";
	char *dest;

	printf("Before ft_strcpy()\ns: %s\nd: %s\n\n", source, destin);
	
	dest = ft_strcpy(destin, source);

	printf("After\ns: %s\nd: %s\n", source, dest);
}
*/
