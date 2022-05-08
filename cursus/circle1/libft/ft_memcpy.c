#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, int n)
{
	char *d=dest;
	char *s=src;
	while(n--)
	{
		*d=*s;
		d++;s++;
	}
}

int main()
{
	char source[50],dest[50];
	int n; 
	printf("Enter source");
	scanf("%s",source);
	printf("Enter dest");
	scanf("%s",dest);
	printf("Enter n");
	scanf("%d",&n);
	ft_memcpy(dest,source,n);
	printf("Dest is now %s",dest);
	return 0;
}	
