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
  int size;
  std::string name;
  std::string desc;
  std::set< Thing * > things;
  std::map<std::string, Room*> exits;

 public:
  Room(std::string name, std::string desc, int size);
  std::string getName();
  std::string getDesc();
  void link(Room* room, std::string exit);
  std::vector<std::string> getExits();
  bool add(Thing* thing);
  void remove(Thing* thing);
  void printExits();
  void printThings(Thing* ignore);
  Room* getLinked(std::string direction);
};

#endif
