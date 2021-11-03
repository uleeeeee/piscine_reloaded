/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:21:23 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/01 11:41:37 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		array_size;
	int		*ptr;
	int		i;

	if (min >= max)
		return (NULL);
	i = 0;
	array_size = max - min;
	ptr = malloc(array_size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
