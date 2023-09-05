#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <libelf.h>
#include <gelf.h>
/**
 *print_elf_header: print elf header
 *
 *
 *Return: void
 */
void print_elf_header(Elf *elf)
{
	GElf_Ehdr ehdr;
	int i = 0;

	if (elf == NULL)
	{
		fprintf(stderr, "Error: Failed to open ELF file or invalid ELF file format\n");
		exit(98);
	}

	if (gelf_getehdr(elf, &ehdr) == NULL)
	{
		fprintf(stderr, "Error: Not an ELF file or failed to read ELF header: %s\n", elf_errmsg(-1));
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");

	while (i < EI_NIDENT)
	{
		printf(" %02x", ehdr.e_ident[i]);
		i++;
	}
	printf("\n");
	printf("  Class:                             %s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", ehdr.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", ehdr.e_type == ET_EXEC ? "EXEC (Executable file)" :
			(ehdr.e_type == ET_DYN ? "DYN (Shared object file)" :
			 (ehdr.e_type == ET_REL ? "REL (Relocatable file)" : "UNKNOWN")));
	printf("  Entry point address:               0x%016lx\n", (unsigned long)ehdr.e_entry);
	printf("  Start of program headers:          %lu (bytes into file)\n", (unsigned long)ehdr.e_phoff);
	printf("  Start of section headers:          %lu (bytes into file)\n", (unsigned long)ehdr.e_shoff);
	printf("  Flags:                             0x%lx\n", (unsigned long)ehdr.e_flags);
	printf("  Size of this header:               %d (bytes)\n", ehdr.e_ehsize);
	printf("  Size of program headers:           %d (bytes)\n", ehdr.e_phentsize);
	printf("  Number of program headers:         %d\n", ehdr.e_phnum);
	printf("  Size of section headers:           %d (bytes)\n", ehdr.e_shentsize);
	printf("  Number of section headers:         %d\n", ehdr.e_shnum);
	printf("  Section header string table index: %d\n", ehdr.e_shstrndx);
}
/**
 *main - main entry of program
 *@argc:program to open
 *@argv:file to ELF
 *
 *Return: sucess 0
 */
int main(int argc, char *argv[])
{
	const char *elf_filename = argv[1];
	int fd;
	Elf *elf;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	if ((fd = open(elf_filename, O_RDONLY, 0)) < 0)
	{
		perror("open");
		return (1);
	}

	if ((elf = elf_begin(fd, ELF_C_READ, NULL)) == NULL)
	{
		fprintf(stderr, "Error: Not an ELF file or failed to open ELF file: %s\n", elf_errmsg(-1));
		close(fd);
		return (98);
	}
	print_elf_header(elf);

	if (elf_end(elf) != 0)
	{
		fprintf(stderr, "Error: Failed to close ELF file: %s\n", elf_errmsg(-1));
		close(fd);
		return (98);
	}

	if (close(fd) == -1)
	{
		perror("close");
		return (1);
	} 
	return (0);
}
