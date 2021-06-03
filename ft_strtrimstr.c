/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 09:10:46 by joiglesi          #+#    #+#             */
/*   Updated: 2021/06/03 08:30:58 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimstr(char const *s1, char const *set)
{
	char	*trim;
	size_t	set_len;
	size_t	len;

	len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (ft_strncmp(s1, set, set_len) == 0
		&& ft_strncmp(s1 + len - set_len, set, set_len) == 0)
		trim = ft_substr(s1, set_len, len - set_len * 2);
	else if (ft_strncmp(s1, set, set_len) == 0)
		trim = ft_substr(s1, set_len, len - set_len);
	else
		trim = ft_substr(s1, 0, len - set_len);
	if (!trim)
		return (NULL);
	return (trim);
}
