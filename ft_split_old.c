/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:16:49 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/01 11:22:19 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "libft.h"

static int	ft_case_null(char **ptr, size_t index)
{
	if (ptr[index] == NULL)
	{
		ft_rfree((void **)ptr);
		return (0);
	}
	return (1);
}

static size_t	ft_split_count(char const *s, char c)
{
	size_t	n;
	size_t	i;
	size_t	last;

	n = 0;
	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i > 0 && s[i - 1] != c)
				n++;
			last = i;
		}
		i++;
	}
	if (i > last + 1)
		return (n + 1);
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*s_trim;
	size_t	count;
	size_t	new_index;
	int		c_index;

	s_trim = ft_strtrim(s, &c);
	count = ft_split_count(s_trim, c);
	split = (char **)malloc(sizeof(char *) * count + 1);
	new_index = 0;
	while (new_index < count)
	{
		s_trim = ft_strtrim(s_trim, &c);
		c_index = ft_strnchr(s_trim, c);
		if (c_index == -1)
			c_index = ft_strnchr(s_trim, 0);
		if (c_index > 0)
			split[new_index] = ft_substr(s_trim, 0, c_index);
		if (!ft_case_null(split, new_index))
			return (NULL);
		new_index++;
		split[new_index] = NULL;
		s_trim += c_index + 1;
	}
	return (split);
}
