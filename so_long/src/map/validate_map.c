/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:45:47 by ahbilla           #+#    #+#             */
/*   Updated: 2025/01/17 21:29:57 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int validate_map(int fd)
{
    char *line;
    int i = 0;

    line = get_next_line(fd);

    while (line[i] != '\0' && line[i] != '\n')
    {
        if (line[i] != '1')
        {
            write(2, "map not vlide\n", 15);
            free(line);
            return -1;
        }
        i++;
    }
    write(1, "\x1b[33;1mWELCOME TO SO_LONG\n\x1b[33;1m", 34);
    printf("%s", line);
    free(line);
    return 0;
}