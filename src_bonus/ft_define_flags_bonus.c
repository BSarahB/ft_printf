/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_flags_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:40:46 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:40:49 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

void	ft_define_flags(char *format_code, t_format_code *ptr, size_t current)
{
	if (format_code[current] == '-')
		(*ptr).minus = 1;
	if (format_code[current] == '+')
		(*ptr).plus = 1;
	if (format_code[current] == ' ')
		(*ptr).space = 1;
	if (format_code[current] == '#')
		(*ptr).diez = 1;
	if (format_code[current] == '0')
		if (((current == 0) || (ft_isdigit(format_code[current - 1]) == 0)) \
				&& (*ptr).limitation != 1)
			(*ptr).zero = 1;
}
