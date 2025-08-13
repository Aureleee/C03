/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:13:20 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/13 20:28:57 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j + i < size && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}

int	main(void)
{
	char dest[7] = "H";
	const char *src = "nnn";
	char ln;

	ln = ft_strlcat(dest, src, 7) +'0';
    write(1, dest, 5);
	write(1, &ln, 1);
	return (0);
}