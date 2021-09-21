/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_in_base_b_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:29:11 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:29:18 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

void	ft_convert_in_base_b(unsigned long nbr2, unsigned long base_length, \
	char *base, char *str)
{
	unsigned long	quotient;
	unsigned long	reste;

	quotient = nbr2 / base_length;
	reste = nbr2 % base_length;
	if (quotient != 0)
		ft_convert_in_base_b(quotient, base_length, base, str + 1);
	*str = base[reste];
}
