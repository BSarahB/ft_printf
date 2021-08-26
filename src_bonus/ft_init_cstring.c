/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cstring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:36:53 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 06:04:55 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_init_cstring(char **str, size_t len, char init_value)
{
	*str = malloc(sizeof(char) * (len + 1));
	if (!(*str))
		return (NULL);
	if (len > 0)
		ft_memset(*str, init_value, len);
	(*str)[len] = '\0';
	return (*str);
}
