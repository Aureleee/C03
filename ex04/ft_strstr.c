/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:44:33 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/14 18:43:19 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	*ft_strstr(char *haysatck, char *needle)
{
	int		i;
	char	*ptr_needle;

	i = 0;
	ptr_needle = needle;
	while (*haysatck && *ptr_needle)
	{
		while (haysatck[i] == *ptr_needle && *ptr_needle)
		{
			i++;
			ptr_needle++;
		}
		if (*ptr_needle)
		{
			haysatck++;
			ptr_needle = needle;
			i = 0;
		}
	}
	return (haysatck);
}

// int	main(void)
// {
// 	char str1[7] = "AA3bbA\0";
// 	char str2[4] = "b\0";
// 	write(1, ft_strstr(str1, str2), 5);
// }