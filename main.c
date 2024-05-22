#include "libft.h"

int compare_is_function(int (f)(int), int (f2)(int))
{
	char str[11] = "1aWe78P?l\n";
	int i = 0;
	while(str[i])
	{
		if((f)(str[i]) > 0 && (f2)(str[i]) <= 0)
			return 0;
		if((f)(str[i]) <= 0 && (f2)(str[i]) > 0)
			return 0;
		i++;
	}
	return 1;
}

void print_msg(int s, char *func_name)
{
	if(s)
		printf("%s: OK\n", func_name);
	else
		printf("%s: Failed\n", func_name);
}

// int main()
// {
// 	// char str[11] = "1aqlffWDD";
// 	char str1[] = "BBBB";
// 	char str2[] = "AAAAAAAAA";
// 	// char original[] = "The original string.";
// 	// print_msg(compare_is_function(ft_isalnum, isalnum), "ft_isalnum");
// 	// print_msg(compare_is_function(ft_isalpha, isalpha), "ft_isalpha");
// 	// print_msg(compare_is_function(ft_isascii, isascii), "ft_isascii");
// 	// print_msg(compare_is_function(ft_isdigit, isdigit), "ft_isdigit");
// 	// print_msg(compare_is_function(ft_isprint, isprint), "ft_isprint");
// 	// print_msg(ft_strlen("qwertyui") == strlen("qwertyui"), "ft_strlen");
// 	// print_msg(compare_is_function(ft_tolower, tolower), "ft_tolower");
// 	// print_msg(compare_is_function(ft_toupper, toupper), "ft_toupper");
// 	// print_msg(ft_strchr("wfeflnv", 'n') == strchr("wfeflnv", 'n'), "ft_strchr");
// 	// print_msg(ft_strrchr("wfeflnv", 'n') == strrchr("wfeflnv", 'n'), "ft_strrchr");

// 	// // print_msg(ft_strncmp("wfeflnv", "wfeln", 7) == strncmp("wfeflnv", "wfeln", 7), "ft_strncmp");
// 	// // print_msg(ft_strnstr("Foo Bar Baz", "Bar", 3) == strnstr("Foo Bar Baz", "Bar", 3), "ft_strnstr");
// 	// print_msg(ft_strdup(original) == strdup(original), "ft_strdup");
// 	// printf("i1 = %d\n", ft_strncmp(str1, str2, -1));
// 	printf("i1 = %d\n", ft_strlcat(str1, str2, 6));
// 	printf("DEST: %s", str1);
// }

int main() {

    // On crée une zone de mémoire de 10 entiers et contenant
    // que neuf valeurs. La dixième est non utilisée (0).
    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

    // On affiche le contenu de la collection
    for( int i=0; i<10; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne

    // On décale les éléménts dans la collection ...
    void * source = (void *) data;
    void * destination = (void *) ( data + 1 );
    size_t size = 10 * sizeof( int );
    ft_memmove( destination, source, size );

    // ... pour y insérer une nouvelle valeur en tête
    data[0] = 10;

    // On affiche le contenu de la collection
    for( int i=0; i<10; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne

    return 0;
}
