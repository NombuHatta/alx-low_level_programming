#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <string.h>
#include "main.h"

/**
 * print_error - Pint an error message
 * @msg: The error message to display
 */
void print_error_message(const char *msg)
{
	write(STDERR_FILENO, msg, strlen(msg));
	exit(98);
}

/**
 * print_elf_header - Display ELF header information
 * @header: Pointer to the ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
	(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
	(header->e_ident[EI_DATA] == ELFDATA2MSB) ?
	"2's complement, big endian" : "2's complement, little endian");
	printf("  Version:                           %d (current)\n",
	header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
	header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
	header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n",
	header->e_type);
	printf("  Entry point address:               0x%lx\n",
	header->e_entry);

}


/**
 * main - Entry point
 * @argc: Command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error_message("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error_message("Error: Unable to open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error_message("Error: Unable to read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
		print_error_message("Error: Not an ELF file");

	printf("ELF Header:\n");
	print_elf_header(&header);

	close(fd);
	return (0);
}
