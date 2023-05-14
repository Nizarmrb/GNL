/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelmrabe <nelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:11:05 by nelmrabe          #+#    #+#             */
/*   Updated: 2023/05/14 16:50:19 by nelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

/*Includes*/

# include<stdlib.h>
# include<unistd.h>
# include<limits.h>

/*Functions*/

int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *str, char c);
char	*before_n(char *str);
char	*after_n(char *ptr);
char	*get_next_line(int fd);
int		read_fun(int read, char **line);
#endif