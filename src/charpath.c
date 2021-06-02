/*
** EPITECH PROJECT, 2017
** charpath
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

char *charpath(char *path, char *files)
{
	char *a = malloc(sizeof(char) * my_strlen(path) + my_strlen(files) + 2);
	int i = my_strlen(path);
	int j = 0;
	int k = 0;
	int l = 0;

	if (path[i - 1] == '/') {
		while (path[j] != '\0') {
			a[k] = path[j];
			k++;
			j++;
		}
		while (files[l] != '\0') {
			a[k] = files[l];
			k++;
			l++;
		}
		a[k] = '\0';
	} else {
		while (path[j] != '\0') {
			a[k] = path[j];
			k++;
			j++;
		}
		a[k] = '/';
		k++;
		while (files[l] != '\0') {
			a[k] = files[l];
			k++;
			l++;
		}
		a[k] = '\0';
	}
	return (a);
}
