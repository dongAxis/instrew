
#ifndef _INSTREW_ELF_LOADER_H
#define _INSTREW_ELF_LOADER_H

#include <elf.h>
#include <stddef.h>


#define Elf_Ehdr Elf64_Ehdr
#define Elf_Phdr Elf64_Phdr
#define Elf_Shdr Elf64_Shdr
#define Elf_Note Elf64_Note

struct BinaryInfo {
    void* entry;
    Elf_Phdr* phdr;
    size_t phnum;
    size_t phent;
};

typedef struct BinaryInfo BinaryInfo;

int load_elf_binary(const char* filename, BinaryInfo* out_info);

#endif
