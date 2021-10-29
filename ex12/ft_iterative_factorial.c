/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:37:09 by tulenius          #+#    #+#             */
/*   Updated: 2021/10/29 12:01:53 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			f = f * i;
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (f);
}
