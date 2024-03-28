/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:46:25 by melmarti          #+#    #+#             */
/*   Updated: 2023/12/05 14:06:57 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
void				read_and_add(t_list **stash, int fd);
int					is_end(t_list *stash);
void				add_to_lst(t_list **stash, char *buffer, int size);
t_list				*lst_last(t_list *stash);
void				extract_line(t_list *stash, char **line);
void				ft_malloc_line(t_list *stash, char **line);
void				clean_and_save(t_list **stash);
void				ft_free(t_list *new_node);
int					ft_strlen(const char *s);

#endif