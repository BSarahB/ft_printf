/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_format_code_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:45:36 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:45:39 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

const char	*ft_get_format_code(const char *format, t_format_code *ptr, \
va_list params)
{
	char	*start;
	char	*format_code;
	size_t	len_format;

	format++;
	start = (char *)format;
	len_format = 0;
	while ((ft_strchr(CONVERSION_CODE, *(format)) == NULL && (*format) != '\0'))
	{
		len_format++;
		format++;
	}
	format_code = ft_strndup(start, len_format + 1);
	if (format_code)
		ft_define_struct(format_code, ptr, params);
	if (*format != '\0')
		format++;
	free(format_code);
	return (format);
}
