/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:17:35 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 21:26:25 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

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
