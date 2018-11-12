/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 10:49:25 by mtaylor           #+#    #+#             */
/*   Updated: 2018/11/11 15:22:53 by mtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

# define BUFF_SIZE 32
# define RET_IF(cond, ret) if (cond) return (ret)

typedef struct		s_gnl
{
	struct s_gnl	*next;
	struct s_gnl	*prev;
	int				fd;
	char			*str;
	char			*overflow;
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
