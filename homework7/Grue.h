#ifndef GRUE_H_
#define GRUE_H_

#include "Agent.h"

#include <string>


class Room;

class Grue:public Agent{
 public:
  Grue(std::string _name);

  bool act();
  bool walk(std::string exit);
};

#endif
