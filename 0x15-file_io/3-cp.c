#include "main.h"

/**
 * main -  a program that copies the content of a file to another file.
 * @ac: Argument count
 * @av: Argument Vector
 *
 * Return: 0 if succesful
 */
int main(int ac, char *av[])
{
	int fdf, fdt, sz, cf, ct;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdf = open(av[1], O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fdt = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((sz = read(fdf, buf, 1024)))
		write(fdt, buf, sz);
	cf = close(fdf);
	ct = close(fdt);
	if (cf)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	if (ct)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	return (0);
}
