/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:40:14 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/25 12:46:31 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{	
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && str[c] >= 97 && str[c] <= 122)
		{
			str[c] -= 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 65 && str[c] <= 90))
			str[c] += 32;
		else if (str[c] < 48 || (str[c] > 57 && str[c] < 65)
			|| (str[c] > 90 && str[c] < 97) || str[c] > 122)
			i = 0;
		else
			i ++;
		c++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "salut, comment \ntu vas ? 42mots quarante-deux; cinquante+et+un";
	
	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
}

