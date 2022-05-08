#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int ch, int freq)
{
	unsigned char *p=str;
	while(freq>0)
	{
		*p=ch;
		p++;
		freq--;
	}
	return str;

}
int main(void)
{
	char str[50];
	char ch;
	int freq;
	printf("Enter string ");
	fgets(str,50,stdin);
	printf("\nThe input of string is %s",str);
	printf("\nEnter character ");
        scanf("%c",&ch);
	printf("\nEnter frequency ");
        scanf("%d",&freq);
	printf("val of freq is %d",freq);
	ft_memset(str,ch,freq);
	printf("\n%s",str);
	return 0;
}

