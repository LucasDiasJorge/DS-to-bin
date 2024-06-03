// binary_io.h
#ifndef BINARY_IO_H
#define BINARY_IO_H

#include <stdio.h>
#include <stdlib.h>

// Função para salvar dados genéricos em um arquivo binário
void saveDataToFile(const char* filename, void* data, size_t dataSize, size_t dataCount);

// Função para carregar dados genéricos de um arquivo binário
void loadDataFromFile(const char* filename, void* data, size_t dataSize, size_t dataCount);

#endif // BINARY_IO_H
