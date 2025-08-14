/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:13:20 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/14 18:59:48 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <unistd.h>

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// 	while (dest[i])	//	Gives i = lennstr(dest) if there's no \0 in dest
	//	it keep looking for one in the memory (like strncat behavior)

// int	main(void)
// {
// 	char dest[20] = "Highway";
// 	const char *src = " to hell\n";

// 	write(1, ft_strncat(dest, src, 3), 10);
// 	return (0);
// }