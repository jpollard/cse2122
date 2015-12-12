// Filename Grue.cpp
#include "Grue.h"
#include "Room.h"

#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

Grue::Grue(string _name):Agent(_name, "a grue", 10) {
  

}

bool Grue::act() {
  int action = rand() % 4;
  
  switch (action){
    case 0:
      walk("north");
      break;
    case 1:
      walk("east");
      break;
    case 2:
      walk("south");
      break;
    case 3:
      walk("west");
      break;
	}
  return true;

}

bool Grue::walk(string exit){
  vector<string> exits;
  exits = currentRoom->getExits(); 
  for(int i = 0; i < exits.size(); i++){
    if (exits[i] == exit){
      currentRoom = currentRoom->getLinked(exit);
    }
      
  }
  return true;
}
