/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:47:39 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/02/01 17:36:52 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ini;
	int	total;

	ini = 0;
	total = (max - min);
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc (total * sizeof (int));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[ini++] = min++;
	return (ini);
}

int main()
{
	int *res;
	int j;


	j = ft_ultimate_range(&res, 0, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", res[i]);
	}
	printf("\n%d", ft_ultimate_range(&res, 0, 5));
	return 0;
}
