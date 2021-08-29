/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_reinit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:27:01 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 18:33:33 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_struct_reinit(t_format_code *ptr)
{
	(*ptr).minus = 0;
	(*ptr).plus = 0;
	(*ptr).space = 0;
	(*ptr).diez = 0;
	(*ptr).zero = 0;
	(*ptr).n = 0;
	(*ptr).p = 0;
	(*ptr).limitation = 0;
	(*ptr).conv = 0;
	ft_reinit_cstring(&(*ptr).str_psp, 0, 0);
	ft_reinit_cstring(&(*ptr).str_sign, 0, 0);
	ft_reinit_cstring(&(*ptr).str_diez, 0, 0);
	ft_reinit_cstring(&(*ptr).str_0_p, 0, 0);
	ft_reinit_cstring(&(*ptr).str_sp_g, 0, 0);
	ft_reinit_cstring(&(*ptr).str_0fil_g, 0, 0);
	(*ptr).sign = 0;
	(*ptr).ox = 0;
	(*ptr).flag = 0;
	(*ptr).nb_0_digits_for_p = 0;
	(*ptr).nb_spaces_for_g = 0;
}
