/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:13:20 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/14 17:07:50 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <unistd.h>

int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = 0;
	while (j + i < size - 1 && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

// while (dest[i] && i < size){..}
// i = strlen(dest) (i = size - 1 if dest is not terminated)
// if (i < size)
// Wich mean that src was terminated hence we need to terminate the buffer dest
// 	while (src[j])
// Therefore j = strlen(src)

// int	main(void)
// {
// 	unsigned int	size;
// 	char			dest[7] = "xxxx5x\0";
// 	const char		*src = "nn";
// 	char			ln;

// 	size = 7;
// 	ln = ft_strlcat(dest, src, size) + '0';
// 	write(1, dest, size);
// 	write(1, &ln, 1);
// 	return (0);
// }
