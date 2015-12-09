#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Room;

class Player : Agent {
 public:
  Player(std::string name, std::string desc, int size);

  bool act();
};

#endif
