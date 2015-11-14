#include "libft.h"

void	ft_putstr(const char *s)
{
		int	index;

		index = 0;
		while (s[index] != '\0')
		{
				ft_putchar(s[index]);
				index++;
		}
}
