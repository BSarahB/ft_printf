/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_eval_sign.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:13:47 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 20:16:20 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_custom_eval_sign(t_format_code *ptr, char **str)
{
	char	*old_str;

	(*ptr).str_sign = ft_reinit_cstring(&((*ptr).str_sign), 1, 0);
	if ((*str)[0] == '-' && (*ptr).conv != 's' && (*ptr).conv != 'c')
	{
		(*ptr).sign = 1;
		(*ptr).str_sign[0] = '-';
		(*ptr).str_sign[1] = '\0';
		old_str = *str;
		*str = ft_strndup((*str) + 1, ft_strlen(*str) - 1);
		ft_free_struct_str(&old_str);
	}
	return (*str);
}
