#include "the_dud.h"

void	pp_bar_segment(int dots, int delay, char c)
{
	int i;
	i = 0;
	if (dots <= 0)
		return;
	while(i < dots)
	{
		write(1, &c, 1);
		usleep(delay);
		i++;
	}
}


void	pp_bar(t_bar bar_params)
{
	int dot_nbr;
	int write_speed;

	dot_nbr = 0;
	write_speed = 1;
	while(42)
	{
		dot_nbr = pp_rand(1, (bar_params.size)/5);
		write_speed = pp_rand_mult(10, 5000, 20);
		bar_params.percent += dot_nbr;
		if (bar_params.percent > bar_params.size)
		{
			dot_nbr += bar_params.size - bar_params.percent;
			pp_bar_segment(dot_nbr, write_speed, bar_params.bar_c);
			write(1, "\n", 1);
			break;
		}
		else
			pp_bar_segment(dot_nbr, write_speed, bar_params.bar_c);
	}
}