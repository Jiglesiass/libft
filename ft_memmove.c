/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_memmove.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: joiglesi <joiglesi@student.42urduliz.com>	+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/05/30 18:56:10 by joiglesi		   #+#	  #+#			  */
/*	 Updated: 2021/06/03 08:06:04 by joiglesi		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	else if (src == dst)
		return (dst);
	dst += len - 1;
	src += len - 1;
	while (len-- > 0)
		*((unsigned char *)dst--) = *((unsigned char *)src--);
	return (++dst);
}
