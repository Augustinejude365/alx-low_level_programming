#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define ELF_MAGIC_SIZE 4

typedef struct
{
	uint8_t magic[ELF_MAGIC_SIZE];
	uint8_t class;
	uint8_t data;
	uint8_t version;
	uint8_t os_abi;
	uint8_t abi_version;
	uint8_t pad[7];
	uint16_t type;
	uint16_t machine;
	uint32_t version2;
	uint64_t entry;
	uint64_t ph_offset;
	uint64_t sh_offset;
	uint32_t flags;
	uint16_t header_size;
	uint16_t ph_entry_size;
	uint16_t ph_num;
	uint16_t sh_entry_size;
	uint16_t sh_num;
	uint16_t sh_str_index;
} ElfHeader;

/**
 * print_error - a function that prints error if elf header fails.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void print_error(void)
{
	fprintf(stderr, "Error: Not a valid ELF file\n");
	exit(98);
}

/**
 * read_elf_header - A function that reads elf header files.
 * @filename: name of the file.
 * Return: Nothing.
 */
void read_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error();
	}

	ElfHeader header;

	if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		print_error();
	}

	if (memcmp(header.magic, "\x7f\x45\x4c\x46", ELF_MAGIC_SIZE) != 0)
	{
		print_error();
	}

	printf("  Magic:   ");
	for (int i = 0; i < ELF_MAGIC_SIZE; ++i)
	{
		printf("%02x ", header.magic[i]);
	}
	printf("\n");
	printf("  Class:   %s\n", header.class == 1 ? "ELF32" : "ELF64");
	printf("  Data:  %s\n", header.data == 1 ? "2's complement, little endian"
			: "2's complement, big endian");
	printf("  Version:  %d (current)\n", header.version);
	printf("  OS/ABI:  %d\n", header.os_abi);
	printf("  ABI Version: %d\n", header.abi_version);
	printf("  Type:  0x%x\n", header.type);
	printf("  Entry point address:  0x%llx\n", header.entry);

	close(fd);
}

/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	read_elf_header(argv[1]);

	return (0);
}
