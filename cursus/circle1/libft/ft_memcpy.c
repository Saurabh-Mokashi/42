#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char *d;
	char *s;

	d = dest;
	s = src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
}
