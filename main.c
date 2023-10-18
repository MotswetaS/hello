#include "shell.h"
#include <stdbool.h>

/**
 * Description - this function evokes the prompt
 * Return - 1 is success and 0 is fail
 *
 */

int main(void)
{
	char command[135];

	while (1)
	{
		dispose_prompt();
		carry_command(const char *command);
		study_command(command, sizeof(command));
	}
	return (0);
}
