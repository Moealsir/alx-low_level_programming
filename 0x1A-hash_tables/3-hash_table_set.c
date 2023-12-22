#include "hash_tables.h"

/***
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: head of the hash
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index(key, ht->size);
    hash_node_t *node = ht->array[index];
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;
    if (node == NULL)
    {
        ht->array[index] = new_node;
        return (1);
    }
    while (node->next!= NULL)
    {
        if (strcmp(node->key, key) == 0)
        {
            node->value = strdup(value);
            return (1);
        }
        node = node->next;
    }
    if (strcmp(node->key, key) == 0)
    {
        node->value = strdup(value);
        return (1);
    }
    node->next = new_node;
    return (1);
}
