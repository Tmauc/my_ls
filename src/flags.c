/*
** EPITECH PROJECT, 2017
** flags
** File description:
** 
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int wls(char **av, int j)
{
	int i = 1;

	switch(av[j][i]) {
	case 'l':
		if (av[j][i + 1] == 'a')
			return (1);
		if (av[j][i + 1] == '\0')
			return (0);
		break;
	case 'a':
		if (av[j][i + 1] == 'l')
			return (1);
		if (av[j][i + 1] == '\0')
			return (2);
		break;
	default:
		break;
	}
	return (4);
}

int flags(char **av)
{
	int j = 1;

	while (av[j] != NULL) {
		if (av[j][0] == '-')
			return (wls(av, j));
		else
			j++;
	}
	return (3);
}
