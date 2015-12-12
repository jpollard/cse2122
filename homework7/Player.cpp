// Filename Player.cpp
#include "Player.h"
#include "Room.h"

#include <string>
#include <iostream>

using namespace std;

Player::Player(string _name, string _desc, int _size):Agent(_name, _desc, _size){

}

bool Player::act() {
  cout << this->currentRoom->getDesc();
  return true;
}

bool Player::walk(string exit){
  return true;
}
