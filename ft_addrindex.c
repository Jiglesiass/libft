/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addrindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:22:28 by joiglesi          #+#    #+#             */
/*   Updated: 2021/05/31 11:22:44 by joiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_addrindex(void *chunk, void *addr)
{
	size_t	i;

	i = 0;
	while (chunk++ != addr)
		i++;
	return (i);
}
