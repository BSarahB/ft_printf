/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 05:21:09 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/25 19:08:32 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_putnbr_base(int nbr, char *base, t_format_code *ptr)
{
	long	nbr2;
	char	*str;
	int		sign;
	char	str_sign[2];

	if (!ft_init_cstring(&str, STR_SIZE, 0))
		return (NULL);
	if (nbr == 0 && (*ptr).p == 0 && (*ptr).limitation == 1)
		return (str);
	sign = 0;
	nbr2 = nbr;
	if (nbr2 < 0)
	{
		sign = 1;
		str_sign[0] = '-';
		str_sign[1] = '\0';
		nbr2 = nbr2 * -1;
	}
	ft_convert_in_base_b((unsigned long)nbr2, ft_strlen(base), base, str);
	if (sign == 1)
	{
		str = ft_update_string(&str, ft_strjoin(str_sign, ft_strrev(str)));
		return (str);
	}
	return (ft_strrev(str));
}
