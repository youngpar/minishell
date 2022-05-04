#include "../inc/minishell.h"

t_glob	g_val;

void	print_banner(char *argv[])
{
	printf("run %s\n", argv[0]);
}

int	main(int argc, char *argv[])
{
	if (argc != 1)
		return (1);
	print_banner(argv);
	echo(NULL);
	adder("park", "youngseo");
	adder("kim", "donghyun");
	printf("");
	minishell();
	return (0);
}
