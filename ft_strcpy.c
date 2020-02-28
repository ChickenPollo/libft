/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 15:41:32 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/22 15:47:46 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char	*new;

	new = dst;
	while (*src)
	{
		*new = *src;
		new++;
		src++;
	}
	*new = '\0';
	return (dst);
}