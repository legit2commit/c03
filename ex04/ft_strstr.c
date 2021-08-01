int	compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

char	*ft_strstr(char	*str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare(str, to_find))
		{	
			return (str);
		}
		str++;
	}
	return ("\0");
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = " print this sentence after the word string up to here.";
	char	to_find[] = "string";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
*/
