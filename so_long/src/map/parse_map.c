/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:12:49 by ahbilla           #+#    #+#             */
/*   Updated: 2025/01/17 19:09:16 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int parse_map(char *av[])
{
    int fd;
    char *extension;
    char *map;

    map = strjoin("assets/maps/", av[1]);
    extension = strrchr(av[1], '.');
    if (extension && strcmp(extension, ".ber") == 0)
    {
        fd = open(map, O_RDONLY);
        if (fd != -1)
        {
            if (validate_map(fd) == -1)
                return -1;
            close(fd);
        }
        else
        {
            write(2, "\033[31mError\nMaps are not valid\n\033[0m", 36);
            free(map);
            return -1;
        }
    }
    else
    {
        write(2, "\033[31mError\n<maps_name>.ber\n\033[0m", 33);
        free(map);
        return -1;
    }
    free(map);
    return 0;
}