/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_ret.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:56:26 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 18:31:29 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_count_ret(t_format_code *ptr, char *str)
{
	(*ptr).ret += ft_strlen((*ptr).str_sign) \
	+ ft_strlen((*ptr).str_psp) \
	+ ft_strlen((*ptr).str_diez) \
	+ ft_strlen((*ptr).str_0_p) \
	+ ft_strlen((*ptr).str_sp_g) \
	+ ft_strlen((*ptr).str_0fil_g) \
	+ ft_strlen(str);
	if (str[0] == '\0' && (*ptr).conv == 'c')
		(*ptr).ret += 1;
}
