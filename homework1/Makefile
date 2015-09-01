CC = g++
SRC = homework1.cpp
OBJ = homework1.o
CFLAGS = --stdlib c++11 -Wall
PROG = homework1

%.o: %.cpp
	$(CC) $(CFLAGS) -c $(SRC) 

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(PROG)

clean:
	rm $(OBJ)
	rm $(PROG)
