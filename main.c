#include "libft.h"
#include <stdio.h>


void ft_del(void *cont)
{
	if(cont)
	{
		free(cont);
	}
}

void *ft_modify(void *mod)
{
	char *ptr = (char *)mod;
	char *new = malloc(2);
	if(!new)
	{
		return NULL;
	}
	if(*ptr >= 'a' && *ptr <= 'z')
	{
		new[0] = *ptr - 32;
	} else {
		new[0] = *ptr;
	}
	new[1] = '\0';
	return new;
}
