/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:20:23 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/22 16:40:43 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int size)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}
