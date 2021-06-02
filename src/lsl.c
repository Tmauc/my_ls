/*
** EPITECH PROJECT, 2017
** lsl
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

int lsl(char *path)
{
	DIR* rep = NULL;
	struct dirent* a = NULL;
	int f = 0;
	struct stat b;
	char *timedos = malloc(sizeof(char) * 26);

	rep = opendir(path);
	while ((a = readdir(rep)) != NULL) {
		if (a->d_name[0] == '.')
			f++;
		else {
			if (stat(charpath(path, a->d_name), &b) != 0) {
				my_putstr(a->d_name);
				return 0;
			}
			perm(b);
			name(b);
			my_put_nbr(b.st_size);
			my_putchar(' ');
			timedos = ctime(&b.st_mtime);
			date(timedos);
			my_putstr(a->d_name);
			my_putchar('\n');
		}
	}
	closedir(rep);
	return (1);
}
