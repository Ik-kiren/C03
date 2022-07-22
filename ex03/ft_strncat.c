#include<string.h>
#include<stdio.h>

char *ft_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
char tab[] = "test";
char arr[] = "grappe";

ft_strncat(tab, arr, 3);
printf("%s", tab);
}
