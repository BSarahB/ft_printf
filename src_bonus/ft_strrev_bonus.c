/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:03:28 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 17:03:31 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size_str;
	char	tmp;

	i = 0;
	size_str = 0;
	while (str[size_str])
		size_str++;
	size_str = size_str - 1;
	while (size_str > i)
	{
		tmp = str[size_str];
		str[size_str] = str[i];
		str[i] = tmp;
		i++;
		size_str--;
	}
	return (str);
}
