#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	char		*dest;
	const char	*src;

	dest = (char *)destination;
	src = (const char *)source;
	while (num)
	{
		num--;
		dest[num] = src[num];
	}
	return (dest);
}

// int main()
// {
// 	char a[] = "abcde";
// 	char a1[] = "abcde";
// 	puts(a);
// 	puts(a1);
// 	memcpy(a+2, a, 3);
// 	ft_memcpy(a1+2, a1, 3);
// 	puts(a);
// 	puts(a1);
// }