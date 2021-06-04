/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:46:44 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/04 09:31:10 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static void	ft_clear(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	ft_clear(*lst, del);
	*lst = NULL;
}

static void	ft_clear(t_list *lst, void (*del)(void *))
{
	if (lst->next)
		ft_clear(lst->next, del);
	if (lst->content)
		del(lst->content);
	free(lst);
}
