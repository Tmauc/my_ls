/*
** EPITECH PROJECT, 2017
** date
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include "my.h"

void date(char *timedos)
{
	int i = 0;
	int size = 12;
	char *finaldate = malloc(sizeof(char) * 14);

	timedos = timedos + 4;
	while (size != 0) {
		finaldate[i] = timedos[i];
		i++;
		size--;
	}
	finaldate[12] = ' ';
	finaldate[13] = '\0';
	my_putstr(finaldate);
}
