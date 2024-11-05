#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "save_struct.c"

#define SAVE_PATH "./save_test.bin"

int main()
{
    save_struct save_data = prepare_save_struct();
    print_save_struct(&save_data);

    FILE *save_file = fopen(SAVE_PATH, "wb");
    assert(save_file);

    fwrite(&save_data, sizeof(save_data), 1, save_file);
    fclose(save_file);

}