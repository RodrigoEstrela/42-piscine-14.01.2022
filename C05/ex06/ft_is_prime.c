/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:20:53 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/02/01 19:53:28 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb < 2)
		return (0);
	while (p <= nb / 2 && p <= 46341)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}

int main ()
{
	printf("%d\n", ft_is_prime(-5));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(11));
}
