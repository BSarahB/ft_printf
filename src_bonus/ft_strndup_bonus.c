/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:44:20 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 06:02:05 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

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
