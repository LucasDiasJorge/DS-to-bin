// binary_io.c
#include "binary_io.h"

void saveDataToFile(const char* filename, void* data, size_t dataSize, size_t dataCount) {
    FILE *file = fopen(filename, "wb");
    if (file != NULL) {
        fwrite(data, dataSize, dataCount, file);
        fclose(file);
    } else {
        perror("Error opening file for writing");
    }
}

void loadDataFromFile(const char* filename, void* data, size_t dataSize, size_t dataCount) {
    FILE *file = fopen(filename, "rb");
    if (file != NULL) {
        fread(data, dataSize, dataCount, file);
        fclose(file);
    } else {
        perror("Error opening file for reading");
    }
}
