/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:41:36 by joiglesi          #+#    #+#             */
/*   Updated: 2021/05/31 11:57:43 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*match;
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			match = (char *)&haystack[i];
			j = 0;
			while (needle[j] && haystack[i] == needle[j] && i < len)
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (match);
		}
		else
			i++;
	}
	return (NULL);
}
