int	ft_atoi(const char *str)
{
	int	signature;
	int	number;

	number = 0;
	signature = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signature = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += (*str - '0');
		str++;
	}
	number *= signature;
	return (number);
}
