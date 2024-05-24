/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:14:05 by bgoron            #+#    #+#             */
/*   Updated: 2024/02/26 17:27:10 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	if (!s1 || !s2)
		return (s1 != s2);
	while (s1 && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	if (!n)
		return (0);
	return (*s1 - *s2);
}
