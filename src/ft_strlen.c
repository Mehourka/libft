typedef __SIZE_TYPE__ size_t;

size_t	ft_strlen(const char *str)
{
	size_t i;

	if (!str)
		return (0);
	i = 0;
	while(str[i])
		i++;
	return(i);
}