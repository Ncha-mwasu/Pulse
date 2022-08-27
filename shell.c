#include "shell.h"

int main (int arg __attribute__((unused)), char **argv)

{
	(void) argv;
	
	signal(SIGINT ctrl_C);

	while(1)
	{
		print(" (/$/) ", STDOUT_FILENO);
		line = get_line();
	}

