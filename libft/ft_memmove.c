/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:31:46 by luiberna          #+#    #+#             */
/*   Updated: 2023/10/03 17:20:05 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *tdest;
    unsigned char *tsrc;
    
    i = 0;
    tdest = (unsigned char *)dest;
    tsrc = (unsigned char *)src;
    
    if(!tdest && !tsrc)
        return (0);
        
    if(tdest < tsrc)
    {
        
    }

// efghijkhijk
// |   |
//       

// src < dest == left to right


#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[15];
    char src[] = "Ora muito bom dia!";
    printf("%s\n", ft_memmove(dest, src, 6));
    printf("%s\n", memmove(dest, src, 6));
    return (0);
}