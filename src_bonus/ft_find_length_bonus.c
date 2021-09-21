/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_length_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:43:00 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:43:03 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

int	ft_find_length(int n)
{
	int		length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		length++;
		n = n / 10;
	}
	return (length);
}
