/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalokhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 19:23:15 by aalokhin          #+#    #+#             */
/*   Updated: 2018/04/24 19:23:18 by aalokhin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# define BUFF_SIZE 5

int				get_next_line(int fd, char **line);

typedef	struct	s_h
{
	int			s;
	size_t		c;
	char		*si;
	char		*tm;
	t_list		*j;
}				t_h;

typedef	struct	s_j
{
	size_t		l;
	size_t		c1;
	size_t		c2;
	int			i;
	char		*res;
}				t_j;

#endif
