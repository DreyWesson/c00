/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:57:03 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/26 10:20:46 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_chars(int a, int b, int c)
{
	int	condition;

	if (!(a == b || a == c || b == c))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a == '7' && b == '8' && c == '9')
			condition = 1;
		else
		{
			write(1, ", ", 1);
			write(1, " ", 1);
			condition = 0;
		}
	}
	else
	{
		condition = 0;
	}
	return (condition);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	condition;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				condition = ft_print_chars(i, j, k);
				if (condition == 1)
					break ;
				k++;
			}
			j++;
		}
		i++;
	}
}
