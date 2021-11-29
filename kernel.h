#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct vertex {
    /* TODO */
    int index; // index of this vertex
    
} vertex;

typedef struct island {
    /* TODO */
    int n_vertices; // number of vertices in this island
    vertex* vertices; // array of vertices in this island
    
} island;

vertex parse_adv_list(char* string);
int find_islands(island** islands, vertex* vertices, int n_vertices);
int find_eulerian_path(int** vertexIndices, island island);