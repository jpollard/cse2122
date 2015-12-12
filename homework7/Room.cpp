// Filename: Room.cpp
#include "Room.h"

#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

Room::Room(string _name, string _desc, int _size){
  name = _name;
  desc = _desc;
  size = _size;
  set<Thing*> things;
  map<string, Room*> exits;
}

string Room::getName(){
  return name;
}

string Room::getDesc(){
  return desc;
}

void Room::link(Room* room, string exit){
  exits.insert( pair<string, Room*>(exit, room));
}

Room* Room::getLinked(string direction){
  map<string, Room*>::iterator position;
  position = exits.find(direction);
  if(position != exits.end()){
    return position->second;
  }
}

vector<string> Room::getExits(){
  vector<string> x;
  map<string, Room*>::iterator it;
  for(it = exits.begin(); it != exits.end(); it++){
    x.push_back(it->first);
  }

  return x;
}

bool Room::add(Thing* thing){
  bool added = false;
  things.insert(thing);

  return true;
}

void Room::remove(Thing* thing){
  // std::set does not have a remove function, need to create a temp subset without the "thing" and save that in "things"
  //
}

// Print exits of the current room.
void Room::printExits(){
  map<string, Room* >::iterator it;
  cout << "Exits: ";
  for(it = exits.begin(); it != exits.end(); it++){
    cout << it->first << " ";
  }
  cout << endl;
}

void Room::printThings(Thing* ignore){
}
