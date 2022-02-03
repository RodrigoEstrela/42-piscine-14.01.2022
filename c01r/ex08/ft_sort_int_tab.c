/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:48:00 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/19 19:28:38 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	temp;

	c = 0;
	while (c < size)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		c++;
	}
}
/*
int main ()
{
	int tab[] = {2,1,9,4,8,6,3};
	ft_sort_int_tab(tab, 7);
	for(int i = 0; i < 7; i++)
		printf("%d ", tab[i]);
}
*/
