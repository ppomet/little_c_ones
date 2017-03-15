#ifndef THE_DUD
# define THE_DUD

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <fcntl.h>

# define VERB 1
# define DEMO 0


typedef struct 	s_bar
{
	int			percent;
	int			size;
	char		bar_c;
	size_t		min_speed;//la bone unite se serait en caracteres par ms
	size_t		max_speed;
}				t_bar;

typedef struct 	s_dud
{
	char*		spe_char;
	char**		lines;
	t_bar		bar_data;
	size_t		gib_turns;
}				t_dud;

/*
** PP_ARRAYS.c
*/

void spe_char_init(t_dud *dude);
char** array_outputs(void);


/*
**PP_BAR.C
*/

void	pp_bar(t_bar bar_params);
void	pp_bar_segment(int dots, int delay, char c);

/*
** PP_CODE.C
*/

void pp_code(t_dud *dude);

/*
** PP_GIB.C
*/

void pp_gibberish(t_dud *dude);

/*
** PP_HEXA.C
*/

void	hexa_code_generator(size_t nb_lines_min, size_t nb_lines_max, size_t nb_min, size_t nb_max);

/*
** PP_RAND.c
*/

int pp_rand(int start, int stop);
int pp_rand_mult(int start, int stop, int mult);
void pp_dots(int dots, int delay);
void pp_code_rand(int char_nb, int interval, char* spe_char);



/*
** PP_TOOLS.C
*/

int ft_strlen(char *s);
void ft_putstr(char *s);

/*
** THE_DUD.c
*/

#endif