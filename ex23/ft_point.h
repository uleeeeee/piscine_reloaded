/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:30:00 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/02 09:40:25 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H
typedef struct s_point
{
	int	x;
	int	y;
}			t_point;
void	set_point(t_point *point);
#endif
