/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_display_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:31:04 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:31:12 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_custom_display(t_format_code *ptr, char *str)
{
	if ((*ptr).conv == '%')
		ft_display(ptr, str);
	else
	{
		str = ft_custom_eval_sign(ptr, &str);
		ft_custom_eval_diez(ptr, str);
		ft_custom_eval_space(ptr);
		ft_custom_eval_gp(ptr, str);
		str = ft_custom_eval_convs(ptr, &str);
		ft_display(ptr, str);
		ft_count_ret(ptr, str);
	}
	return (str);
}
