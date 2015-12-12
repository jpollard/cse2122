// Filename: Thing.cpp
#include "Thing.h"

#include <string>

using namespace std;

Thing::Thing(string _name, string _desc, int _size){
  name = _name;
  desc = _desc;
  size = _size;
  currentRoom = NULL;
}

string Thing::getName(){
  return name;
}

string Thing::getDesc(){
  return desc;
}

int Thing::getSize(){
  return size;
}

bool Thing::moveTo(Room* room){
  bool moved = false;
  
  if(room->add(this)){
    if(currentRoom != NULL){
      currentRoom->remove(this);
    }
    currentRoom = room;
    moved = true;
  }

  return moved;
}
