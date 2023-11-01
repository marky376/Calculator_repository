#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void display_prompt(void);
void markm_print(const char *format, ...);
void execute_command(const char *command) __attribute__((unused));
void read_command(char *commnad(char *command, size_t size);

#endif
