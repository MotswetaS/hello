#include "shell.h"

void study_command(char *command, size_t size) {
	if (fgets (command, size, stdn) == NULL) {
		if (feof(stdin)) {
			my_write("\n");
			exit(EXIT_SUCCESS);
		} else {
			my_write("Error whilst reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command. "\n")] = '\0';
}
