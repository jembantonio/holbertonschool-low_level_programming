#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* struct list_s - a singly linked list
* @str: pointer to malloc string
* @len: length of string
* @next: points to the next node in the list
*
* Description: singly linked list node structure
* for Holberton project
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* PROTOTYPES */
size_t print_list(const list_t *h);

#endif
