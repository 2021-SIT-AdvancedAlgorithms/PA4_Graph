# Instructions
1. Clone the git repository in your workspace.
1. Implement `kernel.c` and `kernel.h` if necessary.
1. Compile the project using `make` command.
1. Look at `make example` command in `Makefile` for example input and output.
1. **DO NOT** change the driver code written in `grpah.c`.

# TODO
- You have to find the islands(components) in a set of undirected graph.
  - https://en.wikipedia.org/wiki/Component_(graph_theory)
  - You can use either DFS, BFS and binary heap to solve the problem. Explain your algorithm in the report in detail.
- For each island, you have to find the eulerian path.
  - https://en.wikipedia.org/wiki/Eulerian_path#:~:text=In%20graph%20theory%2C%20an%20Eulerian,ends%20on%20the%20same%20vertex.
 
Read the comments in the code for detail constraints.

# Datasets
Note that different inputs will be used for grading.
- Input
  - Files under `./in` are example inputs for the program. The first row indicates the number of vertices and the others are the graph represented as adjacency lists.
- Output
  - Files under `./out` are example outputs for the program. It contains two data: the island data and the eulerian path data.

# Competition
1. Competition will be based on the entire process.
1. `input_competition.txt` will be used for competition (`make competition` command). (Will be upload soon)
1. Obviously, your program must correctly testify the island and the eulerian path.
