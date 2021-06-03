/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:16:11 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/01 09:35:31 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	ft_istrim(int c, const char *set)
{
	while (*set && *set != c)
		set++;
	if (*set)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		start;
	int		end;

	start = 0;
	while (ft_istrim(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_istrim(s1[end], set))
		end--;
	if (end >= start)
		trim = ft_substr(s1, start, end - start + 1);
	else
	{
		trim = (char *)malloc(sizeof(char));
		trim[0] = '\0';
	}
	if (!trim)
		return (NULL);
	return (trim);
}
