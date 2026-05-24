#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct graph_s - Representation of a graph
 * We use an adjacency linked list to represent our graph
 * @nb_vertices: Number of vertices in our graph
 * @vertices: Pointer to the head node of our adjacency linked list
 */
typedef struct graph_s
{
	size_t nb_vertices;
	vertex_t *vertices;
} graph_t;
graph_t *graph_create(void);
#endif
