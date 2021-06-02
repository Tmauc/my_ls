/*
** EPITECH PROJECT, 2017
** lsa
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

int lsa(char *path)
{
	DIR* rep = NULL;
	struct dirent* a = NULL;

	rep = opendir(path);
	while ((a = readdir(rep)) != NULL) {
		my_putstr(a->d_name);
		my_putchar('\n');
	}
	return (1);
}
