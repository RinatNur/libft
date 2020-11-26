/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheat <jheat@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 19:29:34 by jheat             #+#    #+#             */
/*   Updated: 2020/06/18 12:39:22 by jheat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		print_list(t_list *list)
{
	while (list)
	{
		printf("%s ", (char *)list->content);
		list = list->next;
	}
	puts("");
}
int		main(void)
{
	t_list		*new_list;
	
	new_list = ft_lstnew("chance");
	ft_lstadd_front(&new_list, ft_lstnew("good"));
	ft_lstadd_front(&new_list, ft_lstnew("a"));
	ft_lstadd_front(&new_list, ft_lstnew("It's"));
	ft_lstadd_back(&new_list, ft_lstnew(NULL));

//	puts(new_list->content);
	print_list(new_list);
	printf("Кол-во элементов в массиве = %d\n", ft_lstsize(new_list)); 
	printf("Последний элемент списка = %s\n", (char *)ft_lstlast(new_list)->content); 
}
