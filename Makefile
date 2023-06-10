all: numbers

numbers: main.o
	g++ main.o

main.o: main.c
	g++ -c main.c

clean:
	rm -rf *.o a.out
