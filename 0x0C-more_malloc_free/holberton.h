#ifndef _HOLBERTON_H_
#define _HOLBERON_H_

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
void *malloc_checked(unsigned int b);

#endif /* _HOLBERTON_H_*/
