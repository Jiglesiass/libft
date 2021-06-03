/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:10:20 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/01 12:47:07 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start >= ft_strlen(s))
		substr = (char *)malloc(sizeof(char));
	else
		substr = (char *)malloc(len * sizeof(char) + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
