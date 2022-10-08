#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{
	char *ptr;
	size_t i;

	i = 0;
	ptr = (char *)str;
	while(i < n)
	{
		ptr[i] = c;
		i++;
	}
	return ((void *)ptr);
}

int main () {
   char str[50];
   char str1[50];

   strcpy(str,"Th");
   strcpy(str1,"Th");
   puts(str);
   puts(str1);
   memset(str,'$',2);
   ft_memset(str1,'$',2);
   puts(str);
   puts(str1);
   
   return(0);
}