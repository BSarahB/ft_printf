/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_char_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:55:20 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 16:55:26 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

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
