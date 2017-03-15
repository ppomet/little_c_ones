#include "the_dud.h"

static unsigned int seed_rng(void)
{
    int fp = open("/dev/random", O_RDONLY);
    if (fp == -1) abort();
    unsigned int seed;
    unsigned pos = 0;
    while (pos < sizeof(seed)) {
        int amt = read(fp, (char *) &seed + pos, sizeof(seed) - pos);
        if (amt <= 0) abort();
        pos += amt;
    }
    close(fp);
    return(seed);
}

int pp_rand(int start, int stop)
{
	int ret;

	ret = 0;
	srand(seed_rng());
	ret = ((rand() % (stop - start)) + start );
	return (ret);
}

int pp_rand_mult(int start, int stop, int mult)
{
	int ret;

	ret = 0;
	srand(seed_rng());
	ret = ((rand() % (stop - start)) + start )* mult;
	return (ret);
}

void pp_dots(int dots, int delay)
{
	int i;
	i = 0;
	while(i < dots)
	{
		write(1, ".", 1);
		usleep(delay);
		i++;
	}
}

void pp_code_rand(int char_nb, int interval, char *spe_char)
{
	int i;
	int	idx;
	char c;

	i = 0;
	idx = 0;
	while(i < char_nb)
	{
		idx = pp_rand(0, 33);
		c = (char)spe_char[idx];
		write(1, &c, 1);
		usleep(interval);
		i++;
	}
}