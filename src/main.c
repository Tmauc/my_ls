/*
** EPITECH PROJECT, 2017
** main
** File description:
** 
*/

#include <stdio.h>
#include "my.h"
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

int main(int ac, char **av)
{
	char *c = ".";
	char *path = arg(ac, av);

	if (ac == 1) {
		ls(c);
	} else if (ac >= 2) {
		if (flags(av) == 0) {
			total(path);
			lsl(path);
		}
		if (flags(av) == 1) {
			totala(path);
			lsla(path);
		}
		if (flags(av) == 2)
			lsa(path);
		if (flags(av) == 3)
			ls(path);
	}
	av[1] = 0;
	return (0);
}
