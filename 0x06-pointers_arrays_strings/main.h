#ifndef MAIN_HEADER
#define MAIN_HEADER
/*Including libraries*/

#include <stdio.h>
#include <unistd.h>
/*_putchar function*/

int _putchar(char c);
/*Concatenated Strings*/
char *_strcat(char *dest, char *src);
/*Concatenates two strings.*/
char *_strncat(char *dest, char *src, int n);
/*Copies a string*/
char *_strncpy(char *dest, char *src, int n);
/*Compares two strings*/
int _strcmp(char *s1, char *s2);
/*Reverses an array*/
void reverse_array(int *a, int n);
/*Converts lower case in upper case*/
char *string_toupper(char *);
/*Capitalizes words */
char *cap_string(char *);
/*1337 encoder*/
char *leet(char *);



#endif /* MAIN_HEADER */
