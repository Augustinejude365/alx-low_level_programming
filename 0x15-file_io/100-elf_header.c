#include <elf.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void elf_check(unsigned char *e_ident);
void magic_print(unsigned char *e_ident);
void data_print(unsigned char *e_ident);
void version_print(unsigned char *e_ident);
void osabi_print(unsigned char *e_ident);
void elf_close(int elf);

/**
 * elf_check - A function that checks if a file is an ELF file.
 * @e_ident: The pointer to an array containing the ELF magic num.
 * Written by Jude Augustine.
 * Description: If the file is not an ELF file, or on error, exit
 * with status code 98 and display a comprehensive error message to stderr.
 * Return: Nothing.
 */
void elf_check(unsigned char *e_ident)
{
	if (!(e_ident[0] == 0x7f && e_ident[1] == 'E' && e_ident[2]
== 'L' && e_ident[3] == 'F'))
	{
		dprintf(STDERR_FILENO, "Error: Document not an ELF file\n");
		exit(98);
	}
}

/**
 * magic_print - A function that prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: Ensure that the magic numbers are separated by
 * spaces.
 * Return: Nothing upon success.
 */
void magic_print(unsigned char *e_ident)
{
	int k;

	printf("  Magic:   ");

	for (k = 0; k < EI_NIDENT; k++)
	{
		printf("%02x", e_ident[k]);

		if (k == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_print - A function that prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: Nothing on success.
 */
void class_print(unsigned char *e_ident)
{
	printf("  Class:   ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data_print - A function that prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 * Return: Upon success, nothing.
 */
void data_print(unsigned char *e_ident)
{
	printf("  Data:    ");
	if (e_ident[EI_DATA] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * version_print - A function that prints the version of an ELF
 * header.
 * @e_ident: A pointer to an array containing the ELF version.
 * Return: on success, nothing.
 */
void version_print(unsigned char *e_ident)
{
	printf("  Version: %d", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}

/**
 * osabi_print - A function that prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array that contains the ELF version.
 * Return: On success, nothing.
 */
void osabi_print(unsigned char *e_ident)
{
	printf("  OS/ABI:     ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi_print - A function that prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 * Return: On success, nothing.
 */
void abi_print(unsigned char *e_ident)
{
	printf("  ABI Version:  %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * type_print - A function that prints the type of an ELF header.
 * @e_type: The ELF type pointer.
 * @e_ident: A pointer to an array that contains the ELF class.
 * Return: On success, nothing.
 */
void type_print(unsigned int e_type, unsigned char *e_ident)
{
	printf("  Type:    ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	if (e_type == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (e_type == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (e_type == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (e_type == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (e_type == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry_point_print - A function that prints the entry point of an
 * ELF header file.
 * @e_entry: The address to the ELF entry point header file.
 * @e_ident: A pointer to an array that contains the ELF class.
 * Return: On success, nothing.
 */
void entry_point_print(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Address of the Entry Point: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * elf_close - A function that closes an ELF file.
 * @elf_fd: The file descriptor of the ELF file.
 * Description:If the file is not an ELF file, or on error, exit
 * with status code 98 and display a comprehensive error message to
 * stderr.
 * Return: On success, nothing.
 */
void elf_close(int elf_fd)
{
	if (close(elf_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf_fd);
		exit(98);
	}
}

/**
 * main - A function that displays the information that is contained
 * in the ELF header at the start of an ELF file.
 * @argc: The number of arguments parsed to the program.
 * @argv: An array of pointers to the arguments.
 * Description:If the file is not an ELF file, or on error, exit
 * with status code 98 and display a comprehensive error message to stderr.
 * Return: 0 upon success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int elf_fd, rd_result;

	elf_fd = open(argv[1], O_RDONLY);
	if (elf_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elf_close(elf_fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	rd_result = read(elf_fd, header, sizeof(Elf64_Ehdr));
	if (rd_result == -1)
	{
		free(header);
		elf_close(elf_fd);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}

	elf_check(header->e_ident);
	printf("ELF Header:\n");
	magic_print(header->e_ident);
	class_print(header->e_ident);
	data_print(header->e_ident);
	version_print(header->e_ident);
	osabi_print(header->e_ident);
	abi_print(header->e_ident);
	type_print(header->e_type, header->e_ident);
	entry_point_print(header->e_entry, header->e_ident);

	
	free(header); 
	elf_close(elf_fd); 
	return (0);
}
