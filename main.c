// main.c
#include <stdio.h>
#include "binary_io.h"

#define TABLE_SIZE 1000

// Estrutura para o nó da Hashtable
typedef struct {
    int key;
    int value;
} HashNode;

// Hashtable
HashNode hashtable[TABLE_SIZE];

int main() {
    // Inicializar a hashtable com alguns valores para teste
    for (int i = 0; i < TABLE_SIZE; ++i) {
        hashtable[i].key = i;
        hashtable[i].value = i * 10;
    }

    // Salvar a Hashtable em um arquivo
    saveDataToFile("hashtable_data.bin", hashtable, sizeof(HashNode), TABLE_SIZE);

    // Limpar a Hashtable para simular o carregamento
    for (int i = 0; i < TABLE_SIZE; ++i) {
        hashtable[i].key = 0;
        hashtable[i].value = 0;
    }

    // Carregar a Hashtable do arquivo
    loadDataFromFile("hashtable_data.bin", hashtable, sizeof(HashNode), TABLE_SIZE);

    // Verificar se os dados foram carregados corretamente
    for (int i = 0; i < TABLE_SIZE; ++i) {
        printf("Key: %d, Value: %d\n", hashtable[i].key, hashtable[i].value);
    }

    return 0;
}
