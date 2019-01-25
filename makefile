#Makefile                                                                     \
                                                                                

                                                               
main: main.o cypher.o rot13.o substitution.o
		g++ --std=c++11 -o main cypher.cpp rot13.cpp substitution.cpp main.cpp
		./main
main.o: main.cpp
		g++ --std=c++11 -c main.cpp

cypher.o: cypher.cpp cypher.h
		g++ --std=c++11 -c cypher.cpp

rot.o: rot.cpp rot.h
		g++ --std=c++11 -c rot.cpp

clean:
		-rm -f *.o main
