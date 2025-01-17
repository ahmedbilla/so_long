/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:46:14 by ahbilla           #+#    #+#             */
/*   Updated: 2025/01/16 23:40:31 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int main(int ac, char *av[])
{
    int fd;
    char *extension;

    if (ac == 2)
    {
        extension = ft_strrchr(av[1], '.');
        if (ft_strcmp(extension, ".ber") == 0)
        {
            fd = open(av[1], O_RDONLY);
            if (fd != -1)
            {
                printf("yes");
            }
            else
                printf("no");
        }
        return (1);
    }
    return 0;
}