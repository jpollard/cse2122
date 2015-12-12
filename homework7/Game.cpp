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
  int i = 0;
  for(it = agents.begin(); it <= agents.end(); it++, i++){
   cout << i << endl;
   agents[i]->act();
  }
  return true;
}

