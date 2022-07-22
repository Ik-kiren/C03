#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (0);
	}
	while (i < n  && (s1[i] && s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{	
	char tab[] = "tefg";
	char arr[] = "test";
	printf("%d\n", ft_strncmp(tab, arr, 0));
	printf("%d", strncmp(tab, arr, 0));
}
