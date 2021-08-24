/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_t_format_code.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:33:54 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 18:37:13 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_free_t_format_code(t_format_code **ptr)
{
	ft_free_struct_str(&((*ptr)->str_psp));
	ft_free_struct_str(&((*ptr)->str_sign));
	ft_free_struct_str(&((*ptr)->str_diez));
	ft_free_struct_str(&((*ptr)->str_0_p));
	ft_free_struct_str(&((*ptr)->str_sp_g));
	ft_free_struct_str(&((*ptr)->str_0fil_g));
	free(*ptr);
	*ptr = NULL;
}
