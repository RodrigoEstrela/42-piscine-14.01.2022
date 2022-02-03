/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:27:30 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/25 17:40:24 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	p;
	int	i;

	p = 0;
	if (to_find[p] == '\0')
		return (str);
	while (str[p])
	{
		i = 0;
		while (to_find[i] == str[p + i])
		{
			if (to_find[i + 1] == '\0')
				return (&str[p]);
			i++;
		}
		p++;
	}
	return (0);
}
/*
int		main(void)
{
	char str[] = "012340123456789";
	char to_find[] = "456";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}*/
