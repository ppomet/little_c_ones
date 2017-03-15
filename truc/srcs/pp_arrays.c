#include "the_dud.h"

void spe_char_init(t_dud *dude)
{
	int 	i;
	char	curr_char;

	i = -1;
	curr_char = 0;
	dude->spe_char = (char*)malloc(sizeof(char)* 34);
	dude->spe_char[33] = '\0';	
	while(++i < 33)
	{
		curr_char++;
		if (curr_char > '~')
		{
			ft_putstr("trop loin dans la boucle\n");
			break;
		}
		else if (curr_char > '_' && curr_char < '{')
			curr_char = '{';
		else if (curr_char > '@' && curr_char < '[')
			curr_char = '[';
		else if (curr_char > '1' && curr_char < ':') 
			curr_char = ':';
		else if (curr_char < '!')
			curr_char = '!';
		dude->spe_char[i] = curr_char;
	}
}

char** array_outputs(void)
{
	/*
	**ici celui des outputs text
	*/
	return (NULL);
}