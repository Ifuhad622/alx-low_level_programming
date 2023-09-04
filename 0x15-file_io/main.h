#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/*New discoveries */
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

/* Mandatory prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Advanced tasks */
/*int main(int argc, char *argv[]);
int main(int argc, const char *argv[]);*/

/* Helper */
int _strlen(char *s);
void error_handler(int exit_code, char *message, char type, ...);
void elf_entry(const unsigned char *buff, size_t bit_mode, int big_endian);
void elf_type(const unsigned char *buff, int big_endian);
void elf_abivers(const unsigned char *buff);
void elf_osabi(const unsigned char *buff);
void elf_version(const unsigned char *buff);
int elf_data(const unsigned char *buff);
size_t elf_class(const unsigned char *buff);
void elf_magic(const unsigned char *buff);
void _read(int fd, char *buf, size_t count);
void _close(int fd);
int _strncmp(const char *s1, const char *s2, size_t n);
void error_file(int file_from, int file_to, char *argv[]);

#endif /* end of MAIN_H file */
