/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:43:47 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/23 16:55:17 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers() {
	int i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}
int	main()
{
	ft_print_numbers();
	return 0;
}