/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_eval_diez_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:33:41 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:33:48 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

void	ft_custom_eval_diez(t_format_code *ptr, char *str)
{
	(*ptr).str_diez = ft_reinit_cstring(&((*ptr).str_diez), 2, 0);
	if (((*ptr).conv == 'p') || ((*ptr).diez == 1 && \
		((*ptr).conv == 'x' || (*ptr).conv == 'X')))
	{
		if (!(str[0] == '0' && ((*ptr).conv == 'x' || (*ptr).conv == 'X')))
		{
			(*ptr).str_diez[0] = '0';
			if ((*ptr).conv == 'X')
				(*ptr).str_diez[1] = 'X';
			else
				(*ptr).str_diez[1] = 'x';
			(*ptr).str_diez[2] = '\0';
			(*ptr).ox = 2;
		}
	}
}
