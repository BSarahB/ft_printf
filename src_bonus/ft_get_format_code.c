/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_format_code.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:43:20 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 21:45:39 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

const char	*ft_get_format_code(const char *format, t_format_code *ptr, \
va_list params)
{
	char	*start;
	char	*format_code;
	size_t	len_format;

	format++;
	start = (char *)format;
	len_format = 0;
	while (ft_strchr(CONVERSION_CODE, *(format)) == NULL)
	{
		len_format++;
		format++;
	}
	format_code = ft_strndup(start, len_format + 1);
	ft_define_struct(format_code, ptr, params);
	format++;
	free(format_code);
	return (format);
}
