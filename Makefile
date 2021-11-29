all:
	gcc -o graph graph.c kernel.c -lm -O2

example:
	./graph < ./in/input_1.txt > ./out/output_1.txt

competetion:
	./graph < ./in/input_competition.txt > ./out/output_competition.txt