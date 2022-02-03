/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:03:20 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/27 14:44:25 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int	s;
	int	c;
	int	n;

	s = 1;
	c = 0;
	n = 0;
	while (str[c] == ' ' || (str[c] >= '\t' && str[c] <= '\r'))
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= 48 && str[c] <= 57)
	{
		n = (str[c] - 48) + (n * 10);
		c++;
	}
	return (n * s);
}

int main ()
{
	char str[] = " ---+--+  1234ab567";
	int val = ft_atoi(str);
	printf("%d", val);
	return 0;
}
