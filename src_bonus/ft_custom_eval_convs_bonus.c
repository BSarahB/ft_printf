/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_eval_convs_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:33:13 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:33:19 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_custom_eval_convs(t_format_code *ptr, char **str)
{
	char	*old_str;

	if ((*ptr).conv == 's')
	{
		if ((*ptr).limitation == 1 && (*ptr).p < ft_strlen_int(*str))
		{
			old_str = *str;
			*str = ft_strndup(*str, (size_t)(*ptr).p);
			ft_free_struct_str(&old_str);
		}
		if ((*ptr).n > ft_strlen_int(*str))
		{
			(*ptr).nb_spaces_for_g = (*ptr).n - ft_strlen_int(*str);
			if ((*ptr).nb_spaces_for_g >= 0)
				ft_reinit_cstring(&((*ptr).str_sp_g), \
								  (size_t)(*ptr).nb_spaces_for_g, ' ');
		}
	}
	return (*str);
}
