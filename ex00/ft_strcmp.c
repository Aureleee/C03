/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:39:33 by ahabbard          #+#    #+#             */
/*   Updated: 2025/08/14 20:53:54 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *string, char *base)
{
	int	value;

	value = 0;
	while (*string && *base && value == 0)
	{
		if (*string > *base)
			value = 1;
		if (*string < *base)
			value = -1;
		string++;
		base++;
	}
	if ((*string || *base && value == 0))
		value = *string - *base;
	return (value);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	char string[12] = "Hea\0";
// 	char base[4] = "Hea\0";

// 	printf("%d", ft_strcmp(string, base));
// }