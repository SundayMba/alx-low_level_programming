#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copyContent(int *, int *);
int closeError(int);
int readError(char *);
int writeError(char *);
void printHeader(const Elf64_Ehdr *hdr);
#endif
