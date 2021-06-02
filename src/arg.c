/*
** EPITECH PROJECT, 2017
** arg
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

char *arg(int ac, char **av)
{
	int i = 1;
	char *c = ".";
	char *path;

	ac--;
	while (ac != '\0') {
		if (av[i][0] != '-') {
			path = malloc(sizeof(char) * my_strlen(av[i]) + 2);
			path = av[i];
			return (path);
		} else {
			i++;
			ac--;
		}
	}
	return (c);
}
