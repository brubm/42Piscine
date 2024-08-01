#include <stdio.h>
#include <stdlib.h>
#include <string.h>


t_dict *create_dict_entry(char *key, char *value) 
{
    t_dict *entry = malloc(sizeof(t_dict)); // Aloca memória para um novo nó da lista
    if (!entry) return NULL; // se a entrada for invalida retorna NULL
    entry->key = strdup(key); // Duplica a string key para armazená-las no novo nó
    entry->value = strdup(value); // Duplica a string value para armazená-las no novo nó
    entry->next = NULL; // Inicializa o ponteiro next com NULL (nó inicial não aponta para nenhum outro nó)
    return entry;
}

void free_dict_entry(t_dict *entry) {
    if (entry) {
        free(entry->key);
        free(entry->value);
        free(entry);
    }
}

t_dict *parse_dictionary(char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) return NULL;

    t_dict *head = NULL, *current = NULL;
    char line[256];

    while (fgets(line, sizeof(line), file)) {
        char *key = strtok(line, ":");
        char *value = strtok(NULL, "\n");

        if (key && value) {
            key = trim_spaces(key);
            value = trim_spaces(value);
            t_dict *entry = create_dict_entry(key, value);

            if (!head) {
                head = entry;
            } else {
                current->next = entry;
            }
            current = entry;
        }
    }

    fclose(file);
    return head;
}

void free_dictionary(t_dict *dict) {
    t_dict *temp;
    while (dict) {
        temp = dict;
        dict = dict->next;
        free_dict_entry(temp);
    }
}
