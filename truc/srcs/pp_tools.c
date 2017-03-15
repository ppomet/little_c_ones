#include "the_dud.h"

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

void ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}