/*
** EPITECH PROJECT, 2017
** name
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include "my.h"
#include <time.h>

void name(struct stat b)
{
	struct passwd *user;
	struct group *grp;
	char *a;
	char *c;
	int hardlink;

	user = getpwuid(b.st_uid);
	grp = getgrgid(b.st_gid);
	hardlink = b.st_nlink;
	a = user->pw_name;
	c = grp->gr_name;
	my_put_nbr(hardlink);
	my_putchar(' ');
	my_putstr(a);
	my_putchar (' ');
	my_putstr(c);
	my_putchar (' ');
}
