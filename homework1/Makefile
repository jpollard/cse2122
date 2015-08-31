CC = g++
SRC = homework1.cpp
OBJ = homework1.o
CFLAGS = --stdlib c++11

%.o: %.cpp
	$(CC) $(CFLAGS) -c $(SRC) 

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) 

clean:
	rm $(OBJ)
	rm a.out
