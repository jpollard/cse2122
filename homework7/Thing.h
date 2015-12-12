#ifndef __THING_H_
#define __THING_H_

#include "Room.h"

#include <iostream>
#include <string>

class Room;

class Thing {
  
 private:
  std::string name;
  std::string desc;
  int size;

 protected:
  Room* currentRoom;

 public:
  Thing(std::string name, std::string desc, int size);

  bool moveTo(Room* room);
  std::string getName();
  std::string getDesc();
  int getSize();

};

#endif
