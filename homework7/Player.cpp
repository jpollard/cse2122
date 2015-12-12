// Filename Player.cpp
#include "Player.h"
#include "Room.h"

#include <string>

using namespace std;

Player::Player(string _name, string _desc, int _size):Agent(_name, _desc, _size){

}

bool act() {
  return true;
}

bool walk(string exit){
  return true;
}
