#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <sys/types.h>

#define BUFF_SIZE 64

void print_error(const char *msg) {
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x", header->e_ident[i]);
        if (i != EI_NIDENT - 1)
            printf(" ");
    }
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                      header->e_type == ET_DYN ? "DYN (Shared object file)" :
                                                      header->e_type == ET_REL ? "REL (Relocatable file)" :
                                                      "UNKNOWN (Unknown type)");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr elf_header;
    
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error: Cannot open file");
    }

    ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr) || memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Error: Not an ELF file");
    }

    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}

