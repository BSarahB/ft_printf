/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:59:24 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 21:03:27 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_define_p(char *format_code, t_format_code *ptr, va_list params, \
int *tc)
{
	size_t	pos;

	pos = 0;
	if (format_code[pos] == '.')
	{
		(*ptr).limitation = 1;
		if (format_code[pos + 1] == '*')
		{
			(*ptr).p = va_arg(params, int);
			pos++;
		}
		else if ((format_code[pos + 1] >= '0') && (format_code[pos + 1] <= '9'))
		{
			(*ptr).p = ft_atoi(&format_code[pos + 1]);
			*tc = 0;
		}
	}
	return (pos);
}
