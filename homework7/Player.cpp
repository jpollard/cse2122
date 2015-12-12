// Filename Player.cpp
#include "Player.h"
#include "Room.h"

#include <string>
#include <iostream>

using namespace std;

Player::Player(string _name, string _desc, int _size):Agent(_name, _desc, _size){

}

bool Player::act() {
  string command;
  cout << currentRoom->getDesc() << endl;
  currentRoom->printExits();
  cout << "Action: ";
  cin >> command;
  
  if(command == "quit" || command == "Quit")
    return false;
  else {
    walk(command);
  }
  return true;

}

bool Player::walk(string exit){
  vector<string> exits;
  exits = currentRoom->getExits(); 
  for(int i = 0; i < exits.size(); i++){
    if (exits[i] == exit){
      currentRoom = currentRoom->getLinked(exit);
    }
      
  }
  return true;
}
