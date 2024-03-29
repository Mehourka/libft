/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmehour <kmehour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:41:35 by kmehour           #+#    #+#             */
/*   Updated: 2023/01/17 11:25:04 by kmehour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	@brief Sets a chunk of n bytes pointed by s to zero
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
