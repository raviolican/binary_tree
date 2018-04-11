project: main.o bintre.o
	gcc main.o bintre.o -o project
main.o: main.c
	gcc -c main.c
bintree.o: bintre.c 
	gcc -c bintre.c

clean:
	rm *.o
