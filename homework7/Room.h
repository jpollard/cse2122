#ifndef ROOM_H_
#define ROOM_H_

#include "Thing.h"

#include <string>
#include <set>
#include <map>
#include <vector>

class Thing;

class Room{
 private:
  std::string name;
  std::string desc;
  set< Thing * > things;
  map<std::string, Room*> exits;

 public:
  Room(std::string name, std::string desc, int size);
  std::string getName();
  std::string getDesc();
  void link(Room* room, std::string exit);
  vector<string> getExits();
  bool add(Thing* thing);
  void remove(Thing* thing);
  void printExits();
  void printThings(Thing* ignore);

};

#endif
