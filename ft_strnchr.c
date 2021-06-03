/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strnchr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: joiglesi <joiglesi@student.42urduliz.com>	+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/05/31 11:05:08 by joiglesi		   #+#	  #+#			  */
/*	 Updated: 2021/06/03 08:22:17 by joiglesi		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

int	ft_strnchr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

/*int	ft_strnchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return (i);
	return (-1);
}*/
