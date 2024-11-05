#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdint.h>

#include "save_struct.c"

#define LOAD_PATH "./save_test.bin"

int main()
{
    save_struct load_data;

    FILE *load_file = fopen(LOAD_PATH, "rb");
    assert(load_file);

    fread(&load_data, sizeof(load_data), 1, load_file);
    fclose(load_file);

    print_save_struct(&load_data);
}