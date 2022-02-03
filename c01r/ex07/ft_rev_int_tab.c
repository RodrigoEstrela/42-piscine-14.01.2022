/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:50:28 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/19 19:24:22 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;
	int	u;

	p = 0;
	while (p < size)
	{
		u = tab[(size -1)];
		tab[(size -1)] = tab[p];
		tab[p] = u;
		size--;
		p++;
	}
}
/*
int main ()
{
	int tab[] = {1,2,3,4,5,6,7};
	ft_rev_int_tab(tab, 7);
	for(int i = 0; i < 7; i++)
		printf("%d ", tab[i]);
}
*/
