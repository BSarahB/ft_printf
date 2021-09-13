/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 05:58:04 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/26 18:31:34 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_convert_value_for_s(t_format_code *ptr, char *str, va_list params)
{
	str = va_arg(params, char *);
	if (!str)
	{
		str = "(null)";
		if ((*ptr).p < 6 && (*ptr).limitation == 1)
		{
			ft_init_cstring(&str, 1, 0);
			(*ptr).n = (*ptr).n;
			return (str);
		}
	}
	str = ft_strndup(str, ft_strlen(str));
	return (str);
}

char	*ft_convert_value(t_format_code *ptr, va_list params)
{
	char	*str;

	str = NULL;
	if ((*ptr).conv == 'c')
		str = ft_putnbr_char((char)va_arg(params, int));
	if ((*ptr).conv == 's')
		str = ft_convert_value_for_s(ptr, str, params);
	if ((*ptr).conv == 'p')
		str = ft_putnbr_base_ul((unsigned long)(va_arg(params, void *)), BH);
	if ((*ptr).conv == 'd' || (*ptr).conv == 'i')
		str = ft_putnbr_base(va_arg(params, int), BD, ptr);
	if ((*ptr).conv == 'u')
		str = ft_putnbr_base_u(va_arg(params, unsigned int), BD, ptr);
	if ((*ptr).conv == 'x')
		str = ft_putnbr_base_u(va_arg(params, unsigned int), BH, ptr);
	if ((*ptr).conv == 'X')
		str = ft_putnbr_base_u(va_arg(params, unsigned int), BHM, ptr);
	if ((*ptr).conv == '%')
		str = ft_init_cstring(&str, 1, '%');
	return (str);
}
