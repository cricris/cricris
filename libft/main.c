#include "libft.h"
#include<stdio.h>

int		main(int argc, char **argv)
{
		if (argc == 2)
		{
				ft_putstr(argv[1]);
				ft_putchar((int)ft_strlen(argv[1]) + '0');
				if (ft_isdigit(argv[1][0]))
						ft_putchar('D');
				if (ft_isalpha(argv[1][1]))
						ft_putchar('A');
		}
		ft_putchar('\n');
		return (0);
}
