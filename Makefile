all: numbers

numbers: main.o test_framework.o
	g++ main.o test_framework.o

main.o: main.c
	g++ -c main.c -g

test_framework.o: test_framework.h test_framework.c
	g++ -c test_framework.c -g

clean:
	rm -rf *.o a.out
