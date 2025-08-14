/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:16:28 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/14 20:38:52 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *string, char *base, unsigned int length_base)
{
	int	value;
	int	index;

	index = 0;
    value = 0;
	while (*string && *base && index < length_base && value == 0)
	{
		if (string[index] > base[index])
			value = 1;
		if (string[index] < base[index])
			value = -1;
		string++;
		base++;
	}
	if ((*string || *base) && index < length_base && value == 0)
		value = *string - *base;
	return (value);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	char string[12] = "He\0";
// 	char base[4] = "Hea\0";

// 	printf("%d", ft_strncmp(string, base, 4));
// }