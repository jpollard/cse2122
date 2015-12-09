#ifndef GAME_H_
#define GAME_H_

#include <vector>

class Agent;

class Game {
 private:
  vector<Agent> agents;

 public:
  Game();

  void addAgent(Agent* agent);
  bool step();
};

#endif

  
