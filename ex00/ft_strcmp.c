int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[6] = "1994";
	char	str2[8] = "1996";

	printf("%d", ft_strcmp(str1, str2));
	return (0);
}
*/
