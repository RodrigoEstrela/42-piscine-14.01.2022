/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:35:56 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/25 09:09:34 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	next_num(char *str, int n)
{
	int	i;

	if (str[n - 1] < '9')
		str[n - 1] += 1;
	else
	{
		i = n - 1;
		while (i >= 0 && str[i] >= 10 - n + i + '0')
			i--;
		if (i < 0)
			*str = '\0';
		else
		{
			str [i] += 1;
			i++;
			while (i < n)
			{
				str[i] = str [i - 1] + 1;
				i++;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	str[9];

	i = 0;
	while (i < n)
	{
		str[i] = i + '0';
		i++;
	}
	while (str[0] != '\0')
	{
		write(1, str, n);
		next_num(str, n);
		if (str[0] != '\0')
			write(1, ", ", 2);
	}
}
/*
int	main(void)
{
	ft_print_combn(4);
}
*/
