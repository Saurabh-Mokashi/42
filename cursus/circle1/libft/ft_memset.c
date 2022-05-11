#include "libft.h"

void	*ft_memset(void *str, int ch, int freq)
{
	unsigned char *p;

	p = str;
	while (freq > 0)
	{
		*p = ch;
		p++;
		freq--;
	}
	return (str);
}
