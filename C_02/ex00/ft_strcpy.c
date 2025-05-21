/*
SYNOPSIS
       #include <string.h>

       char *strcpy(char *dest, const char *src);

       char *strncpy(char *dest, const char *src, size_t n);

DESCRIPTION
       The  strcpy()  function  copies the string pointed to by src, including
       the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
       The  strings  may  not overlap, and the destination string dest must be
       large enough to receive the copy.  Beware  of  buffer  overruns!   (See
       BUGS.)

       The  strncpy()  function is similar, except that at most n bytes of src
       are copied.  Warning: If there is no null byte among the first n  bytes
       of src, the string placed in dest will not be null-terminated.

       If  the  length of src is less than n, strncpy() writes additional null
       bytes to dest to ensure that a total of n bytes are written.

       A simple implementation of strncpy() might be:

           char *
           strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }

RETURN VALUE
       The strcpy() and strncpy() functions return a pointer to the destina‐
       tion string dest.

####

strcpy is a function in the C standard library. It's used to copy the string
pointed to by the source (including the null character) to the destination.

char source[] = "CS50";
char destination[10];

strcpy(destination, source);

In this example, the string "CS50" from the source array is copied into the
destination array. After the strcpy function is called, destination will also
contain the string "CS50".
*/

/*
Copies string from source array into destination array (incl null character).
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "test 123";
//     char dest[10];
// 	char *result_p = ft_strcpy(dest, src);

// 	printf("%s", "===== ex 00 =====\n");
//     printf("%s", dest);
//     printf("\nif a pointer to the destination string is returned: %s\n",
//     dest == result_p ? "true" : "false");
// }
