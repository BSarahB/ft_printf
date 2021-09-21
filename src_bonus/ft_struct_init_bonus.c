/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:07:25 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 17:07:28 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

t_format_code	*ft_struct_init(t_format_code **ptr, char init_value)
{
	*ptr = (t_format_code *)malloc(sizeof(t_format_code));
	if (!(*ptr))
		return (0);
	(*ptr)->minus = 0;
	(*ptr)->plus = 0;
	(*ptr)->space = 0;
	(*ptr)->diez = 0;
	(*ptr)->zero = 0;
	(*ptr)->n = 0;
	(*ptr)->p = 0;
	(*ptr)->limitation = 0;
	(*ptr)->conv = 0;
	(*ptr)->ret = 0;
	(*ptr)->str_psp = ft_init_cstring(&((*ptr)->str_psp), 0, init_value);
	(*ptr)->str_sign = ft_init_cstring(&((*ptr)->str_sign), 0, init_value);
	(*ptr)->str_diez = ft_init_cstring(&((*ptr)->str_diez), 0, init_value);
	(*ptr)->str_0_p = ft_init_cstring(&((*ptr)->str_0_p), 0, init_value);
	(*ptr)->str_sp_g = ft_init_cstring(&((*ptr)->str_sp_g), 0, init_value);
	(*ptr)->str_0fil_g = ft_init_cstring(&((*ptr)->str_0fil_g), 0, init_value);
	(*ptr)->sign = 0;
	(*ptr)->ox = 0;
	(*ptr)->flag = 0;
	(*ptr)->nb_0_digits_for_p = 0;
	(*ptr)->nb_spaces_for_g = 0;
	return (*ptr);
}
