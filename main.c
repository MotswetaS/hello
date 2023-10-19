#include "shell.h"
#include <stdbool.h>

/* Function: main
 * main function of the program
 * its a continuous loop that displays the prompt and executes commands
 */

int main(void)
{
	char command[135];

	while (1)
	{
		dispose_prompt();
		carry_command(command);
		study_command(command, sizeof(command));
	}
	return (0);
}
