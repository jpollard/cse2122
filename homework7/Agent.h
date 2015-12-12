#ifndef AGENT_H_
#define AGENT_H_

#include "Thing.h"

#include <string>


class Agent : public Thing {
 protected:
  Agent(std::string name, std::string desc, int size);

  virtual bool walk(std::string exit) = 0;

 public:
  virtual bool act();
};

#endif
