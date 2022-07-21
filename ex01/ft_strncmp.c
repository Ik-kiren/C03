#include<stdio.h>

int	ft_strncmp(char *s1, char *s2,unsigned int n)
{
	int c;
	int tc;
	int b;
	int tb;
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = 0;
	tc = 0;
	tb = 0;
	while (i <= n)
	{	
		c = s1[i];
		tc += c;
		i++;
	}
	while (j <= n)
	{
		b = s2[j];
		tb += b;
		j++;
	}

	if (tc > tb)
	{
		return (1);
	}
	else if (tc == tb)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

int main()
{	
	char tab[] = "test";
	char arr[] = "testest";
	printf("%d", ft_strncmp(tab, arr, 4));
}