#include "libpp.h"

int main(void)
{
	int 	sentence;
	char	*str;

	str = "bob";

	sentence = 1;

	while(42 && sentence < 500)
	{
		pp_dredd(str, sentence++);
		if (sentence > 10)
			sentence = 0;
	}
}