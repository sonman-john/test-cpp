all: fib

fib: fib-test.o
	g++ -o fib fib-test.o

fib-test.o: fib-test.cpp

clean:
	rm fib-test.o fib
