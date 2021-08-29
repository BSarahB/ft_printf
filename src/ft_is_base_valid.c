/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_base_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:30:03 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/23 23:32:01 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_is_base_valid(char *base, int base_length)
{
	int		i;
	int		z;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		z = i + 1;
		while (z < base_length)
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}
