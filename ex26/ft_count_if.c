/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:06:50 by linyao            #+#    #+#             */
/*   Updated: 2024/06/10 15:48:16 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	is_non_empty_string(char *s)
{
	if (s[0] != '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	*tab[] = {"Hello", "", "World!", "42", NULL};

	printf("Nonempty: %d\n", ft_count_if(tab, is_non_empty_string));
	return (0);
}
*/
