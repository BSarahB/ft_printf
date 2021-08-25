/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gabarit_sup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:38:08 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 21:42:49 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_gabarit_sup(t_format_code *ptr, char *str)
{
	if ((*ptr).p > ft_strlen_int(str) - (*ptr).sign)
	{
		(*ptr).nb_0_digits_for_p = (*ptr).p - ft_strlen_int(str);
		ft_reinit_cstring(&((*ptr).str_0_p), \
		(size_t)(*ptr).nb_0_digits_for_p, '0');
	}
	(*ptr).nb_spaces_for_g = (*ptr).n - (ft_strlen_int(str) + \
	(*ptr).nb_0_digits_for_p + (*ptr).sign + (*ptr).flag + (*ptr).ox);
	if (str[0] == '\0' && (*ptr).nb_spaces_for_g > 0)
	{
		if ((*ptr).limitation == 1 && (*ptr).p == 0 && (*ptr).conv != 'p')
			(*ptr).nb_spaces_for_g = (*ptr).nb_spaces_for_g ;
		else
			(*ptr).nb_spaces_for_g -= 1;
	}
	if ((*ptr).nb_spaces_for_g >= 0)
	{
		if ((*ptr).zero == 1 && (*ptr).limitation == 0 && (*ptr).minus == 0)
			ft_reinit_cstring(&((*ptr).str_0fil_g), \
			(size_t)(*ptr).nb_spaces_for_g, '0');
		else
			ft_reinit_cstring(&((*ptr).str_sp_g), \
			(size_t)(*ptr).nb_spaces_for_g, ' ');
	}
}
