/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:57:38 by joiglesi          #+#    #+#             */
/*   Updated: 2021/05/31 11:13:03 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = ft_strlen(dst);
	dst_len = i;
	j = 0;
	while (src[j] && dstsize > 0 && i < dstsize - 1)
		dst[i++] = src[j++];
	if (dstsize > 0 && dst_len <= dstsize)
		dst[i] = '\0';
	if (dstsize > dst_len)
		return (dst_len + ft_strlen(src));
	return (dstsize + ft_strlen(src));
}
