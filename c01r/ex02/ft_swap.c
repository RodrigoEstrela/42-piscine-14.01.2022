/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:57:54 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/19 18:59:31 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int main ()
{
	int x;
	int y;

	x=2;
	y=3;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}
*/
