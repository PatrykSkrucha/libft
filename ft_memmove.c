#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *dest_ptr;
	char *src_ptr;
	size_t i;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	i = 0;
	while(i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return ((void *)dest_ptr);
}

// int main()
// {
// 	char a[] = "abcde";
// 	puts(a);
// 	memmove(a, a+2, 3);
// 	puts(a);
// }