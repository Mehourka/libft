/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmehour <kmehour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:16:03 by kmehour           #+#    #+#             */
/*   Updated: 2023/05/08 11:23:17 by kmehour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return the min of two int's
*/
long int	ft_min(long int a, long int b)
{
	if (a >= b)
		return (a);
	return (b);
}
