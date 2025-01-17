/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 21:56:43 by ahbilla           #+#    #+#             */
/*   Updated: 2025/01/16 21:57:18 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			last = (char *)&str[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (last);
}