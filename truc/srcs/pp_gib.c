#include "the_dud.h"

void pp_gibberish(t_dud *dude)
{
	size_t i;
	int inf;

	i = 0;
	inf = (int)dude->gib_turns;

	while(inf > -1)
	{

		while(++i < (dude->gib_turns + 1))
		{
			pp_code_rand(pp_rand(16, 256), 100, dude->spe_char);
			write(1, "\n", 1);
			usleep(100);
		}
		i = 0;
		while(++i < 2)
		{
			write(1, "\n", 1);
			pp_dots(240, 15000);
			write(1, "\n\n", 2);
		}
		i = 0;
		if (dude->gib_turns != 0)
			inf--;		
	}
}