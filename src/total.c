/*
** EPITECH PROJECT, 2017
** total
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

int total(char *path)
{
	DIR* rep = NULL;
	struct dirent* a = NULL;
	int f = 0;
	int tot = 0;
	struct stat b;

	rep = opendir(path);
	while ((a = readdir(rep)) != NULL) {
		if (a->d_name[0] == '.')
			f++;
		else {
			if (stat(charpath(path, a->d_name), &b) != 0) {
				return 0;
			}
			tot = (b.st_blocks) / 2 + tot;
		}
	}
	my_putstr("total ");
	my_put_nbr(tot);
	my_putchar('\n');
	return (tot);
}
