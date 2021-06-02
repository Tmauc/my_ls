/*
** EPITECH PROJECT, 2017
** perm
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

void perm(struct stat b)
{
	char *tab = malloc(sizeof(char) * 13);

	tab[0] = (b.st_mode & S_IFDIR) ? 'd' : '-';
	tab[1] = (b.st_mode & S_IRUSR) ? 'r' : '-';
	tab[2] = (b.st_mode & S_IWUSR) ? 'w' : '-';
	tab[3] = (b.st_mode & S_IXUSR) ? 'x' : '-';
	tab[4] = (b.st_mode & S_IRGRP) ? 'r' : '-';
	tab[5] = (b.st_mode & S_IWGRP) ? 'w' : '-';
	tab[6] = (b.st_mode & S_IXGRP) ? 'x' : '-';
	tab[7] = (b.st_mode & S_IROTH) ? 'r' : '-';
	tab[8] = (b.st_mode & S_IWOTH) ? 'w' : '-';
	tab[9] = (b.st_mode & S_IXOTH) ? 'x' : '-';
	tab[10] = '.';
	tab[11] = ' ';
	tab[12] = '\0';
	my_putstr(tab);
}
