/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_eval_space_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:40:00 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:40:10 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

void	ft_custom_eval_space(t_format_code *ptr)
{
	(*ptr).str_psp = ft_reinit_cstring(&((*ptr).str_psp), 1, 0);
	if (((*ptr).plus == 1 || (*ptr).space == 1) && ((*ptr).sign == 0) && \
		((*ptr).conv != 's'))
	{
		(*ptr).flag = 1;
		if ((*ptr).plus == 1)
			(*ptr).str_psp[0] = '+';
		else
			(*ptr).str_psp[0] = ' ';
		(*ptr).str_psp[1] = '\0';
	}
}
