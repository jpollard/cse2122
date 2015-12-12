#ifndef PLAYER_H_
#define PLAYER_H_

#include "Agent.h"

#include <string>


class Room;

class Player:public Agent{
 public:
  Player(std::string _name, std::string _desc, int _size);

  bool act();
  bool walk(std::string exit);
};

#endif
