/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:13:20 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/13 19:54:10 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


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

/* int	main(void)
{
	char dest[20] = "Highway";
	const char *src = " to hell\n";

	write(1, ft_strncat(dest, src, 45), 16);
	return (0);
} */