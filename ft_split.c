/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_split.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: joiglesi <joiglesi@student.42urduliz.com>	+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/06/02 08:17:14 by joiglesi		   #+#	  #+#			  */
/*	 Updated: 2021/06/02 09:58:16 by joiglesi		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	ft_split_count(const char *s, char c);
static int	ft_null_case(char **split, int index);

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		c_index;
	int		split_index;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	split = (char **)malloc(sizeof(char *) * (ft_split_count(s, c) + 1));
	if (!split)
		return (NULL);
	split_index = 0;
	while (i > 0)
	{
		c_index = ft_strnchr(s, c);
		if (c_index > 0)
		{
			split[split_index++] = ft_substr(s, 0, c_index);
			if (ft_null_case(split, split_index - 1))
				return (NULL);
		}
		s += c_index + 1;
		i -= (c_index + 1);
	}
	return (split);
}

static int	ft_split_count(const char *s, char c)
{
	int	c_index;
	int	count;
	int	i;

	count = 0;
	i = ft_strlen(s);
	while (i > 0)
	{
		c_index = ft_strnchr(s, c);
		if (c_index > 0)
			count++;
		s += c_index + 1;
		i -= (c_index + 1);
	}
	return (count);
}

static int	ft_null_case(char **split, int index)
{
	split[index + 1] = NULL;
	if (!split[index])
	{
		ft_rfree((void **)split);
		return (1);
	}
	return (0);
}
