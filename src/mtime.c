/*
** EPITECH PROJECT, 2017
** mtime
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

void main()
{
	struct stat s;
	DIR* rep = NULL;
	struct dirent* a = NULL;
	char *timedos = malloc(sizeof(char) * 26);

	while ((a = readdir(rep)) != NULL) {
		timedos = ctime(&s.st_mtime);
		timedos = timedos;
		my_putstr(timedos);
	}
}
