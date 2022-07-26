/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:51:29 by cdupuis           #+#    #+#             */
/*   Updated: 2022/07/23 13:52:18 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


int main()
{
	char tab[] = "\200";
	char arr[] = "\1";

	printf("%d\n", ft_strcmp(tab, arr));
	printf("%d\n", strcmp(tab, arr));
}