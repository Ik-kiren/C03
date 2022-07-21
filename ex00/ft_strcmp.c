#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int c;
	int tc;
	int b;
	int tb;
	int i;
	int j;
	
	i = 0;
	j = 0;
	tc = 0;
	tb = 0;
	while (s1[i] != '\0')
	{	
		c = s1[i];
		tc += c;
		i++;
	}
	while (s2[j] != '\0')
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
	char arr[] = "test";
	printf("%d", ft_strcmp(tab, arr));
}
