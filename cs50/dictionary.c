// Implements a dictionary's functionality
// External sources played a huge role here. Still I did my job
#include <ctype.h>
#include <strings.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dictionary.h"
#include <stdbool.h>

#define HASHTABLE_SIZE 10000

// Defines struct for a node
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

node *hashtable[HASHTABLE_SIZE];

// Hashing function
int hash_index(char *hash_this)
{
    unsigned int hash = 0;
    for (int a = 0, n = strlen(hash_this); a < n; a++)
    {
        hash = (hash << 2) ^ hash_this[a];
    }
    return hash % HASHTABLE_SIZE;
}

//counter
int counter = 0;

bool load(const char *dictionary)
{
    // dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }
    // Scans dictionary word by word (populating hash table with nodes containing words found in dictionary)
    char word[LENGTH + 1];
    while (fscanf(file, "%s", word) != EOF)
    {
        // Mallocs a node for each new word (i.e., creates node pointers)
        node *new_node = malloc(sizeof(node));
        // Checks if malloc succeeded, returns false if not
        if (new_node == NULL)
        {
            unload();
            return false;
        }
        strcpy(new_node->word, word);
        int hashing = hash_index(new_node->word);
        node *head = hashtable[hashing];

        if (head == NULL)
        {
            hashtable[hashing] = new_node;
            counter++;
        }
        else
        {
            new_node->next = hashtable[hashing];
            hashtable[hashing] = new_node;
            counter++;
        }
    }
    fclose(file);
    return true;
}

// Rif word is found return true
bool check(const char *word)
{
    // Creates copy of word of hash func
    int b = strlen(word);
    char word_copy[LENGTH + 1];
    for (int a = 0; a < b; a++)
    {
        word_copy[a] = tolower(word[a]);
    }
    word_copy[b] = '\0';
    // Initializes hashed word
    int h = hash_index(word_copy);
    // Sets cursor to point to same address as hashtable index/bucket
    node *cursor = hashtable[h];
    // Sets cursor to point to same location as head

    while (cursor != NULL)
    {
        // If strcasecmp is found, return true
        if (strcasecmp(cursor->word, word_copy) == 0)
        {
            return true;
        }
        else
        {
            cursor = cursor->next;
        }
    }

    return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return counter;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    node *head = NULL;
    node *cursor = head;
    // freeing linked lists
    while (cursor != NULL)
    {
        node *temp = cursor;
        cursor = cursor->next;
        free(temp);
    }
    return true;
}
