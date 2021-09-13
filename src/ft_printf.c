/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:07:19 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/13 22:45:06 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int				ret;
	t_format_code	*ptr;
	va_list			params;

	va_start(params, format);
	ptr = ft_struct_init(&ptr, 0);
	while (*format)
	{
		if (*format != '%')
			format = ft_get_libelle(format, ptr);
		else if ((*format == '%') && (*(format + 1) == '%'))
			format = ft_get_pc(format, ptr);
		else if ((*format == '%') && (*(format + 1) == '\0'))
			break ;
		else
			format = ft_get_format_code(format, ptr, params);
	}
	va_end(params);
	ret = (*ptr).ret;
	ft_free_t_format_code(&ptr);
	return (ret);
}
