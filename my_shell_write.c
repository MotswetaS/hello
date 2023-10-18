#include "shell.h"

void my_shell_write(const char *my_write) {
	write(STDOUT_FILENO, my_write, strlen(my_write));
}
