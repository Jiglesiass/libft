/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:57:10 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/02 15:32:48 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	del++;
	new_lst = NULL;
	while (lst->next)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
	return (new_lst);
}
