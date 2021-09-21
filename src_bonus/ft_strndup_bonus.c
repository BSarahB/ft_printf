/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:02:38 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/09/21 17:03:08 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_bonus.h"

char	*ft_strndup(const char *src, size_t n)
{
	char		*dest;
	size_t		size_src;
	size_t		i;

	i = 0;
	size_src = 0;
	while (src[size_src] && i < n)
		size_src++;
	dest = (char *)malloc(sizeof(*dest) * (size_src + 1));
	if (!(dest))
		return (NULL);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
