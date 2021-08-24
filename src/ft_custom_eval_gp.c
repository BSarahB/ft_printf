/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_eval_gp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:00:43 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 18:38:03 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_custom_eval_gp(t_format_code *ptr, char *str)
{
	if ((*ptr).n > (ft_strlen_int(str) + (*ptr).sign) && (*ptr).conv != 's')
	{
		if ((*ptr).n > (*ptr).p)
			ft_gabarit_sup(ptr, str);
		else if ((*ptr).n <= (*ptr).p)
			ft_gabarit_inf(ptr, str);
	}
	if (((*ptr).p > ft_strlen_int(str) - (*ptr).sign) && \
		(*ptr).n <= (ft_strlen_int(str) + (*ptr).sign) && (*ptr).conv != 's')
	{
		(*ptr).nb_0_digits_for_p = (*ptr).p - ft_strlen_int(str);
		ft_reinit_cstring(&((*ptr).str_0_p), \
		(size_t)(*ptr).nb_0_digits_for_p, '0');
	}
}
