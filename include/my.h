/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** 
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main();
void my_putchar(char c);
void my_putstr(char const *str);
int my_printf(char *format, ...);
int my_strlen(char const *str);
char *my_strdup(char *a);
void my_put_nbr(int nb);
void date(char *timedos);
void name(struct stat b);
char *arg(int ac, char **av);
char *charpath(char *path, char *files);
void perm(struct stat b);
int flags(char **av);
int lsl(char *path);
int lsla(char *path);
int lsa(char *path);
int ls(char *path);
int total(char *path);
int totala(char *path);

#endif
