#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read = 0;
char *buffer = malloc(letters);
if (filename == NULL || buffer == NULL)
{
return (0);
}
FILE *fp = fopen(filename, "r");
if (fp == NULL)
{
free(buffer);
return (0);
}
bytes_read = fread(buffer, sizeof(char), letters, fp);
if (bytes_read == 0)
{
free(buffer);
fclose(fp);
return (0);
}
if (fwrite(buffer, sizeof(char), bytes_read, stdout) != bytes_read)
{
free(buffer);
fclose(fp);
return (0);
}
free(buffer);
fclose(fp);
return (bytes_read);
}
