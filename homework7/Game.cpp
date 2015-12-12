#include "Game.h"
#include "Agent.h"

#include <vector>
#include <iostream>

using namespace std;

Game::Game(){
}

void Game::addAgent(Agent *agent){
  agents.push_back(agent);
}

bool Game::step() {
  vector<Agent*>::iterator it;
  bool action = true;
  
  for(it = agents.begin(); it != agents.end(); ++it){
   action = (*it)->act();
   
   if (action == false)
     break;
  }
  return action;
}

