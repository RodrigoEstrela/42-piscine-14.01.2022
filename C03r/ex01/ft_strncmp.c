/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:28:30 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/01/27 19:05:05 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && (s1[i] == s2[i] && (s1[i]) && (s2[i])))
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	char s[] = "hello world";
	char s1[] = "hellO worlD";
	printf("%d", ft_strncmp(s, s1, 6));

}
