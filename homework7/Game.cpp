#include "Game.h"
#include "Agent.h"

void Game::addAgent(Agent* agent){
  agents->back(agent);
}

bool Game::step() {
  
  while(agents->next){
    agents->next->act();
  }
  return true;
}

