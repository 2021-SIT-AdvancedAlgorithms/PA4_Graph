#include "kernel.h"
#include <time.h>
#include <sys/time.h>

int main(int argc, char** argv)
{
	if (argc != 1) {
		fprintf(stderr, "usage: ./graph\n");
		exit(1);
	}

    /* Handle input file */

    int n_vertices;
    scanf("%d\n", &n_vertices);

    vertex vertices[n_vertices];

    char string[256];
    for (int line=0; line<n_vertices; line++) {
        scanf("%s", string);
        vertices[line] = parse_adv_list(string);
    }

	/* Run algorithm */
	struct timeval start;
	gettimeofday(&start, NULL);

	/* Find island */
    island* islands;
    int n_islands = find_islands(&islands, vertices, n_vertices);

    /* For each island, find eulerian path */
    int* eulerian_paths[n_islands];
    int n_eulerians[n_islands];

    for (int island_idx=0; island_idx<n_islands; island_idx++){
        n_eulerians[island_idx] = find_eulerian_path(&eulerian_paths[island_idx], islands[island_idx]);
    }

	struct timeval end;
	gettimeofday(&end, NULL);
	fprintf(stderr, "elapsed time: %lf\n", ((end.tv_sec + end.tv_usec * 0.000001) - (start.tv_sec + start.tv_usec * 0.000001)));

	/* Print result */

    printf("--islands--\n");
    for (int island_idx=0; island_idx<n_islands; island_idx++){
        printf("%d:", island_idx);
        for (int vertex_idx=0; vertex_idx<islands[island_idx].n_vertices; vertex_idx++) {
            printf("%d,",islands[island_idx].vertices[vertex_idx].index);
        }
        printf("\n");
    }

    printf("--eulerian--\n");
    for (int island_idx=0; island_idx<n_islands; island_idx++){
        printf("%d:", island_idx);
        for (int vertex_idx=0; vertex_idx<n_eulerians[island_idx]; vertex_idx++) {
            printf("%d,",eulerian_paths[island_idx][vertex_idx]);
        }
        printf("\n");
    }


    // You have to allocate these arrays to make sure the program does not throws segmentation fault
    for (int island_idx=0; island_idx<n_islands; island_idx++){
        free(islands[island_idx].vertices);
        free(eulerian_paths[island_idx]);
    }
    free(islands);
    
	
	return 0;
}