#include "the_dud.h"

static t_dud *init(t_dud* dude)
{
	dude = (t_dud*)malloc(sizeof(t_dud));
	spe_char_init(dude);
	dude->gib_turns = 75;
	//ft_putstr("dude\n");
	//printf("spe_char_init test \t=> '%s'\nshould be \t\t=> '!\"#$p&'()*+,-./01:;<=>?@[\\]^_{|}~'\n", dude->spe_char);
	return(dude);
}


static void pp_demo(t_dud* dude)
{
	int i;

	i = 0;
	t_bar bob;

	bob.percent = 0;
	bob.size = 125;
	bob.bar_c = '$';
	ft_putstr("Mode DEMO activé.\n\n");
	ft_putstr("barre de chargement.\n");
	while(i++ < 10)
	{
		bob.percent = 0;
		bob.size = pp_rand(25, 150);
		//bob.bar_c++;
		pp_bar(bob);
	}
	i = 0;
	while(i++ < 10)
	{
		hexa_code_generator(pp_rand(2,4), pp_rand(4, 8), 6, 10);
	}
	while(i++ < 15)
	{
		pp_code(dude);
	}
	dude->gib_turns = 5;
	pp_gibberish(dude);
}

int main(void)
{
	t_dud	*dude;

	dude = NULL;
	dude = init(dude);
	if (DEMO == 1)
	{
		pp_demo(dude);
		exit(0);
	}
	//pp_bar()
	pp_gibberish(dude);
	return(0);
}







