<h1 align="center">
	<a href="https://en.wikipedia.org/wiki/C_(programming_language)"> <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" alt="C Programming Language" width="100"height="100"></a>
	<a href="https://unix.org/"> <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/unix/unix-original.svg" alt="UNIX" width="100" height="100"></a>
	<br>
	Libft
</h1>

<p align="center">
	This project is about coding a C library.<br>
	It contains a lot of general purpose functions other programs rely upon.
</p>


|Number|Name|Explanation|
|---|---|---|
|	1|	[isalpha](https://github.com/mmtemel/libft/blob/main/libft/ft_isalpha.c)|	Checks whether a character is an alphabet or not.|
|	2|	[isdigit](https://github.com/mmtemel/libft/blob/main/libft/ft_isdigit.c)|	Checks whether a character is numeric character (0-9) or not.|
|	3|	[isalnum](https://github.com/mmtemel/libft/blob/main/libft/ft_isalnum.c)|	Checks whether the argument passed is an alphanumeric character (alphabet or number) or not.|
|	4|	[isascii](https://github.com/mmtemel/libft/blob/main/libft/ft_isascii.c)|	Tests if a given character, in the current locale, can be represented as a valid 7–bit US-ASCII character.|
|	5|	[isprint](https://github.com/mmtemel/libft/blob/main/libft/ft_isprint.c)|	Checks whether a character is a printable character or not.|
|	6|	[strlen](https://github.com/mmtemel/libft/blob/main/libft/ft_strlen.c)|		Calculates the length of a given string.|
|	7|	[memset](https://github.com/mmtemel/libft/blob/main/libft/ft_memset.c)|		Fill a block of memory with a particular value.|
|	8|	[bzero](https://github.com/mmtemel/libft/blob/main/libft/ft_bzero.c)|		Places n zero-valued bytes in the area pointed to by s.|
|	9|	[memcpy](https://github.com/mmtemel/libft/blob/main/libft/ft_memcpy.c)|		Copies n characters from memory area src to memory area dest.|
|	10|	[memmove](https://github.com/mmtemel/libft/blob/main/libft/ft_memmove.c)|	Copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().|
|	11|	[strlcpy](https://github.com/mmtemel/libft/blob/main/libft/ft_strlcpy.c)|	Copies characters from src to dest and nul-terminate the resulting string.|
|	12|	[strlcat](https://github.com/mmtemel/libft/blob/main/libft/ft_strlcat.c)|	Concatenates characters from src to dest and nul-terminate the resulting string.|
|	13|	[toupper](https://github.com/mmtemel/libft/blob/main/libft/ft_toupper.c)|	Converts a lowercase alphabet to an uppercase alphabet.|
|	14|	[tolower](https://github.com/mmtemel/libft/blob/main/libft/ft_tolower.c)|	Takes an uppercase alphabet and convert it to a lowercase character.|
|	15|	[strchr](https://github.com/mmtemel/libft/blob/main/libft/ft_strchr.c)|		Searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str.|
|	16|	[strrchr](https://github.com/mmtemel/libft/blob/main/libft/ft_strrchr.c)|	Searches for the last occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.|
|	17|	[strncmp](https://github.com/mmtemel/libft/blob/main/libft/ft_strncmp.c)|	Compares at most the first n bytes of str1 and str2.|
|	18|	[memchr](https://github.com/mmtemel/libft/blob/main/libft/ft_memchr.c)|		Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.|
|	19|	[memcmp](https://github.com/mmtemel/libft/blob/main/libft/ft_memcmp.c)|		Compares the first n bytes of memory area str1 and memory area str2.|
|	20|	[strnstr](https://github.com/mmtemel/libft/blob/main/libft/ft_strnstr.c)|	Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.|
|	21|	[atoi](https://github.com/mmtemel/libft/blob/main/libft/ft_atoi.c)|		Converts the string argument str to an integer (type int).|
|	22|	[calloc](https://github.com/mmtemel/libft/blob/main/libft/ft_calloc.c)|		Allocates the requested memory and returns a pointer to it. The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.
|	23|	[strdup](https://github.com/mmtemel/libft/blob/main/libft/ft_strdup.c)|		Returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by s. The memory obtained is done dynamically using malloc and hence it can be freed using free().|
|	24|	[ft_substr](https://github.com/mmtemel/libft/blob/main/libft/ft_substr.c)|	Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
|	25|	[ft_strjoin](https://github.com/mmtemel/libft/blob/main/libft/ft_strjoin.c)|	Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|
|	26|	[ft_strtrim](https://github.com/mmtemel/libft/blob/main/libft/ft_strtrim.c)|	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|
|	27|	[ft_split](https://github.com/mmtemel/libft/blob/main/libft/ft_split.c)|	Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.|
|	28|	[ft_itoa](https://github.com/mmtemel/libft/blob/main/libft/ft_itoa.c)|		Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.|
|	29|	[ft_strmapi](https://github.com/mmtemel/libft/blob/main/libft/ft_strmapi.c)|	Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.|
|	30|	[ft_striteri](https://github.com/mmtemel/libft/blob/main/libft/ft_striteri.c)|	Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.|
|	31|	[ft_putchar_fd](https://github.com/mmtemel/libft/blob/main/libft/ft_putchar_fd.c)|	Outputs the character ’c’ to the given file descriptor.|
|	32|	[ft_putstr_fd](https://github.com/mmtemel/libft/blob/main/libft/ft_putstr_fd.c)|	Outputs the string ’s’ to the given file descriptor.|
|	33|	[ft_putendl_fd](https://github.com/mmtemel/libft/blob/main/libft/ft_putendl_fd.c)|	Outputs the string ’s’ to the given file descriptor followed by a newline.|
|	34|	[ft_putnbr_fd](https://github.com/mmtemel/libft/blob/main/libft/ft_putnbr_fd.c)|	Outputs the integer ’n’ to the given file descriptor.|
|	35|	[ft_lstnew](https://github.com/mmtemel/libft/blob/main/libft/ft_lstnew.c)|		Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.|
|	36|	[ft_lstadd_front](https://github.com/mmtemel/libft/blob/main/libft/ft_lstadd_front.c)|	Adds the node ’new’ at the beginning of the list.
|	37|	[ft_lstsize](https://github.com/mmtemel/libft/blob/main/libft/ft_lstsize.c)|		Counts the number of nodes in a list.
|	38|	[ft_lstlast](https://github.com/mmtemel/libft/blob/main/libft/ft_lstlast.c)|		Returns the last node of the list.
|	39|	[ft_lstadd_back](https://github.com/mmtemel/libft/blob/main/libft/ft_lstadd_back.c)|	Adds the node ’new’ at the end of the list.
|	40|	[ft_lstdelone](https://github.com/mmtemel/libft/blob/main/libft/ft_lstdelone.c)|	Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.|
|	41|	[ft_lstclear](https://github.com/mmtemel/libft/blob/main/libft/ft_lstclear.c)|		Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.|
|	42|	[ft_lstiter](https://github.com/mmtemel/libft/blob/main/libft/ft_lstiter.c)|		Iterates the list ’lst’ and applies the function ’f’ on the content of each node.|
|	43|	[ft_lstmap](https://github.com/mmtemel/libft/blob/main/libft/ft_lstmap.c)|		Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.|








