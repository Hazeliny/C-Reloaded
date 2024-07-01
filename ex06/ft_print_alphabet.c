/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:01:01 by linyao            #+#    #+#             */
/*   Updated: 2024/06/07 18:59:46 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(int c);

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i >= 'a' && i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}
