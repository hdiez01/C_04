int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return(i);
}
/*
int	main(void)
{
	char	str[] = "42 Urduliz";

	int	i = ft_strlen(str);

	printf("%d\n", i);
}
*/