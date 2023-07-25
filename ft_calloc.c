/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:35:06 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/22 16:45:34 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t		total_mem;
	void		*ptr;

	total_mem = num * size;
	ptr = malloc(total_mem);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_mem);
	}
	return (ptr);
}
