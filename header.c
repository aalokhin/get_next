#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

void ft_list_remove_if(struct s_list **begin_list, void *data_ref, int (*cmp)());

typedef struct 		s_list
{
	struct s_list	*next;
	void 			*data;
}					 t_list;



#endif