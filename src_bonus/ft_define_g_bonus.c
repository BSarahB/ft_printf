/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_g.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:47:13 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 20:53:24 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_define_g(char *format_code, t_format_code *ptr, va_list params, \
int *tc)
{
	if ((*format_code >= '1' && *format_code <= '9') && *tc == 1)
	{
		(*ptr).n = ft_atoi(format_code);
		*tc = 0;
	}
	if (*format_code == '*')
		(*ptr).n = va_arg(params, int);
}
