/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gabarit_inf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:35:24 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 21:37:25 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_gabarit_inf(t_format_code *ptr, char *str)
{
	if ((*ptr).p > ft_strlen_int(str) - (*ptr).sign)
	{
		(*ptr).nb_0_digits_for_p = (*ptr).p - ft_strlen_int(str);
		if ((*ptr).nb_spaces_for_g >= 0)
			ft_reinit_cstring(&((*ptr).str_0_p), \
			(size_t)(*ptr).nb_0_digits_for_p, '0');
	}
}
