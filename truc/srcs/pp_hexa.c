#include "the_dud.h"

static char	*hex_char()
{
	static char ret[15];
	int i;
	int tmp;

	i = 0;
	while(i < 14)
	{
		tmp = pp_rand(0, 15);
		if (tmp <= 9)
			tmp += '0';
		else if (tmp > 9 && tmp < 15)
			tmp += 'A' - 9;
		else
			return ("XXXXXXXX");
		ret[i] = tmp;
		i++;
	}
	ret[14] = '\0';
	return(ret);
}

void	hexa_code_generator(size_t nb_lines_min, size_t nb_lines_max, size_t nb_min, size_t nb_max)
{
	size_t lines;
	size_t segments;
	size_t nb_code;
	size_t nb_lines;


	lines = 0;
	segments = 0;
	nb_lines = pp_rand(nb_lines_min, nb_lines_max);
	nb_code = pp_rand(nb_min, nb_max);
	while(lines < nb_lines)
	{		
		while(segments < nb_code)
		{

			write(1, "0x00", 4);
			write(1, hex_char(), 14);
			write(1, "\t", 1);
			segments++;
		}
		segments = 0;
		write(1, "\n", 1);
		lines++;
	}
	usleep(250000);
}