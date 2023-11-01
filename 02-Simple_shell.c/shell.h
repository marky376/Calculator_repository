#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/wait.h>

void display_prompt(void);
void markm_print(const char *format, ...);
void execute_commands(const char *command)/* __attribute__((unused))*/;
void read_commands(char *command, size_t size);
void user_input(char *command, size_t size);
/*void user_input(char *prompt, char *input, size_t size);*/

#endif
