#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a value
 * @ht: the hash tble to look into
 * @key: the key
 *
 * Return: the value associated with the element
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *bucket;

if (!ht || !key || *key)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
bucket = ht->array[index];

while (bucket)
if (!strcmp(key, bucket->key))
return (bucket->value);
bucket = bucket->next;
}
return (NULL);
}
