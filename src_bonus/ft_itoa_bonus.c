/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:50:26 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:50:30 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_itoa(int n)
{
	char	*result;
	int		length;
	long	nb;

	nb = n;
	length = ft_find_length(n);
	result = (char *)malloc(sizeof(*result) * (size_t)length + 1);
	if (!(result))
		return (NULL);
	result[length] = '\0';
	if (nb < 0)
		result[0] = '-';
	else if (nb == 0)
		result[0] = '0';
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		--length;
		result[length] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (result);
}
