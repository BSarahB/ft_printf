/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:05:20 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/13 22:43:11 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_define_struct(char *format_code, t_format_code *ptr, va_list params)
{
	char	*str;
	int		tc;
	size_t	cur_pos;

	str = NULL;
	cur_pos = 0;
	tc = 1;
	ft_struct_reinit(ptr);
	while (format_code[cur_pos])
	{
		ft_define_flags(format_code, ptr, cur_pos);
		ft_define_g(&(format_code[cur_pos]), ptr, params, &tc);
		cur_pos += ft_define_p(&(format_code[cur_pos]), ptr, params, &tc);
		if (ft_strchr(CONVERSION_CODE, format_code[cur_pos]))
			(*ptr).conv = format_code[cur_pos];
		cur_pos++;
	}
	str = ft_convert_value(ptr, params);
	if ((*ptr).conv != '\0')
		str = ft_custom_display(ptr, str);
	else
	{
		ft_putstr(format_code);
	}
	ft_free_struct_str(&str);
}
