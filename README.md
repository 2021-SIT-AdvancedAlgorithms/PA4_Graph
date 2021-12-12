# Announcement
Binary heap 사용에 대해 Algorithm optimzation을 하다보면 binary heap으로 구현된 priority queue는 결국 FIFO로 귀결된다는 질문이 많았습니다.
- Binary heap과 관련된 출제 의도는 다음과 같았습니다 : BFS 구현에 사용될 FIFO queue를 binary heap을 이용해 구현해라
- '제출본을 competition을 위해 바로 사용한다는 점' 및 '알고리즘을 최적화 하는 스킬을 숙련한다'라는 수업의 기본 목표를 고려해 해당 질문이 타당하다고 판단했습니다.
- 따라서 DFS와 BFS의 배점을 기존 (20/40, 30/40) 에서 (25/40, 40/40)으로 바꾸고 binary heap을 이용할 경우 추가점수 10점을 부여하는 식으로 채점 기준을 수정하였으니 참고바랍니다.
- 
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
