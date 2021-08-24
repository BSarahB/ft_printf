/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 05:58:04 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 05:59:22 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_convert_value(t_format_code *ptr, va_list params)
{
	char	*str;

	str = NULL;
	if ((*ptr).conv == 'c')
		str = ft_putnbr_char((char)va_arg(params, int));
	if ((*ptr).conv == 's')
	{
		str = va_arg(params, char *);
		str = ft_strndup(str, ft_strlen(str));
	}
	if ((*ptr).conv == 'p')
		str = ft_putnbr_base_ul((unsigned long)(va_arg(params, void *)), BH);
	if ((*ptr).conv == 'd' || (*ptr).conv == 'i')
		str = ft_putnbr_base(va_arg(params, int), BD);
	if ((*ptr).conv == 'u')
		str = ft_putnbr_base_u(va_arg(params, unsigned int), BD);
	if ((*ptr).conv == 'x')
		str = ft_putnbr_base_u(va_arg(params, unsigned int), BH);
	if ((*ptr).conv == 'X')
		str = ft_putnbr_base_u(va_arg(params, unsigned int), BHM);
	return (str);
}
