/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ul_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:54:46 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:54:49 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_putnbr_base_ul(unsigned long nbr, char *base)
{
	char	*str;

	if (!ft_init_cstring(&str, STR_SIZE, 0))
		return (NULL);
	if (ft_is_base_valid(base, ft_strlen_int(base)))
	{
		ft_convert_in_base_b(nbr, (unsigned long)ft_strlen_int(base), base, \
		 str);
		return (ft_strrev(str));
	}
	return (str);
}
