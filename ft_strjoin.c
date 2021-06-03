/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:15:57 by joiglesi          #+#    #+#             */
/*   Updated: 2021/05/31 11:20:44 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jstr;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	jstr = malloc(len + 1);
	if (jstr == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		jstr[i] = s1[i];
		i++;
	}
	len += ft_strlen(s2);
	j = 0;
	while (i < len)
		jstr[i++] = s2[j++];
	jstr[i] = '\0';
	return (jstr);
}
