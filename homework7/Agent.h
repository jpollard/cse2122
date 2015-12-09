#ifndef AGENT_H_
#define AGENT_H_

#include <string>

class Agent : Thing {
 protected:
  Agent(std::string name, std::string desc, int size);

  bool walk(std::string exit);

 public:
  bool act();
};

#endif
