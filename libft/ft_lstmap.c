/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:39:44 by luiberna          #+#    #+#             */
/*   Updated: 2023/10/09 18:49:40 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*newlist;
	t_list	*newnode;
    
    newlist = NULL;
    while (lst != NULL)
    {
        newnode 
        if (lst->content)
        {
            lst->content = f()
        }
        lst = lst->next
    }
}