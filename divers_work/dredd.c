/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dredd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppomet <ppomet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 20:02:50 by ppomet            #+#    #+#             */
/*   Updated: 2016/11/27 20:37:36 by ppomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpp.h"
#include <stdio.h>

void	pp_dredd(const char *str, int sentence)
{
	printf("I am the LAW and I have judged %s.\n\n",str);
	if (sentence)
		printf("\tthe sentence is %d years in ISOCUBES.\n\n",sentence);
	else
	{
		printf("the sentence is death\n\n");
		exit (0);
	}
}