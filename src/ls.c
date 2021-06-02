/*
** EPITECH PROJECT, 2017
** ls
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

int ls(char *path)
{
	DIR* rep = NULL;
	struct dirent* a = NULL;
	int f = 0;

	rep = opendir(path);
	while ((a = readdir(rep)) != NULL) {
		if (a->d_name[0] == '.')
			f++;
		else {
			my_putstr(a->d_name);
			my_putchar('\n');
		}
	}
	return (1);
}
