#include "the_dud.h"

void pp_code(t_dud *dude)
{
	int i;

	i = 0;
	ft_putstr("test du pp_code_rand avec differents params\n");
	pp_code_rand(20, 100000, dude->spe_char);
	write(1, "\n", 1);
	ft_putstr("burst mode\n");
	while(i <10)
	{
		pp_code_rand(pp_rand(16, 20), 100, dude->spe_char);
		write(1, "\n", 1);
		usleep(100);
		i++;
	}

}