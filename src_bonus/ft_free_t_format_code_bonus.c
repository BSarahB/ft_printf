/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_t_format_code_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:43:58 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:44:05 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

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
