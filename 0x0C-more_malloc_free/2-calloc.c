#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *allocated_mem;
    unsigned int total_size;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;

    allocated_mem = calloc(nmemb, size);

    return (allocated_mem);
}
