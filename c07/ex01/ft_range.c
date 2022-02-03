/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:57:37 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/31 16:06:04 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*ran;
	int	ini;

	ini = 0;
	if (min >= max)
		return (0);
	else
	{
		ran = malloc((max - min) * sizeof(int));
		while (min < max)
			ran[ini++] = min++;
		return (ran);
	}
}
/*
int main()
{
	int *res;

	res = ft_range(0, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", res[i]);
	}
	return 0;
}*/
