/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:29:42 by linyao            #+#    #+#             */
/*   Updated: 2024/06/07 19:51:40 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n > 0 && n < 10)
	{
		c = n + '0';
	}
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1,2,3,4,5,6};
	int	length = sizeof(tab) / sizeof(tab[0]);

	ft_foreach(tab, length, ft_putnbr);
	return (0);
}
*/
