/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:29:14 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 06:21:55 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_putnbr_char(char c)
{
	char		*str;
	size_t		n;

	n = 2;
	str = malloc(sizeof(char) * n);
	if (!(str))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
