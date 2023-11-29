#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/stat.h>
#include <sys/types.h>

void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);

/**
 * print_abi - prints the ABI version of an ELF header
 * @e_ident: a pointer to an array containing the ELF ABI version
 */
void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:               %d\n",
e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident: A pointer to an array containing the ELfF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:                              ");

switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}
