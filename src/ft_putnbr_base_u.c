/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 05:43:52 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/25 19:46:37 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_putnbr_base_u(unsigned int nbr, char *base, t_format_code *ptr)
{
	char	*str;

	if (!ft_init_cstring(&str, STR_SIZE, 0))
		return (NULL);
	if (nbr == 0 && (*ptr).p == 0 && (*ptr).limitation == 1)
		return (str);
	if (ft_is_base_valid(base, ft_strlen_int(base)))
	{
		ft_convert_in_base_b((unsigned long)nbr, \
		(unsigned long)ft_strlen_int(base), base, str);
		return (ft_strrev(str));
	}
	return (str);
}
