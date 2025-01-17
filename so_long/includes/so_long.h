/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:46:22 by ahbilla           #+#    #+#             */
/*   Updated: 2025/01/17 19:00:56 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
# include <fcntl.h>

// #include "get_next_line.h"



char	*ft_strrchr(const char *str, int c);
char	*strjoin(char const *s1, char const *s2);
int	ft_strcmp(char *s1, char *s2);
int parse_map(char *av[]);
int  validate_map(int fd);

//get_next_line
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(const char *src, char *dst);
char	*ft_strdup(char *s, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);

#endif