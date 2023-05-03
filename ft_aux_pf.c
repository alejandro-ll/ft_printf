/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:47 by marvin            #+#    #+#             */
/*   Updated: 2023/04/28 20:57:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


size_t	ft_strlen_pf(const char *str)
{
	size_t	c;

	if (!str)
		return (0);
	c = 0;
	while (str[c])
		c++;
	return (c);
}

void	ft_bzero_pf(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

void	*ft_calloc_pf(size_t number, size_t size)
{
	void	*dest;

	dest = malloc (number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero_pf(dest, number * size);
	return (dest);
}

static size_t	ft_len(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	b_len;

	len = 1;
	b_len = ft_strlen_pf(base);
	while (n >= b_len)
	{
		n /= b_len;
		len++;
	}
	return (len);
}


char	*ft_aux_pf(unsigned long long n, char *base)
{
	char	*str;
	int     n_len;
	int		b_len;

	n_len = ft_len(n, base);
	b_len = ft_strlen_pf(base);
	str = ft_calloc_pf((n_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (n_len)
	{
		n_len -= 1;
		str[n_len] = base[n % b_len];
		n /= b_len;
	}
	return (str);
}
