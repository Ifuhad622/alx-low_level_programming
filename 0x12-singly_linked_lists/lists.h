#ifndef LIST_H
#define LIST_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - func for singly linked list
 * @str: malloc input string
 * @len: str len
 * @next: sequential node points
 * Description: node structure for singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
/* Task prototypes */
/* Task 0 */
size_t print_list(const list_t *h);
/*Task 1 */
size_t list_len(const list_t *h);
/* Task 2 */
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *s);
/* Task 3 */
list_t *add_node_end(list_t **head, const char *str);
/* Task 4 */
void free_list(list_t *head);
/* Task 5 */
void __attribute__ ((constructor)) pre_main();

#endif /* end of List_H file */
