#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t m, n;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	m = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, m);

	close(f);

	free(buf);

	return (n);
}
