#include "Room.h"
#include "Player.h"
#include "Game.h"

#include <iostream>

using namespace std;

int main(){

 Game game;

    Room *entrance = new Room("Entrance",
                              "A wide open entrance...", 100);
    Room *hallway = new Room("Hallway",
                             "A long hallway...", 50);
    Room *ballroom = new Room("Ballroom",
                              "A huge ballroom...", 200);

    entrance->link(hallway, "south");
    hallway->link(entrance, "north");
    hallway->link(ballroom, "east");
    ballroom->link(hallway, "west");

    Player *josh = new Player("Josh", "A prince", 50);
    //Player *tracy = new Player("Tracy", "A princess", 40);
    //josh->moveTo(entrance);
    //tracy->moveTo(entrance);
    game.addAgent(josh);
    //game.addAgent(tracy);

    //Grue *napolean = new Grue("Napolean");
    //Grue *kafka = new Grue("Kafka");
    //napolean->moveTo(ballroom);
    //kafka->moveTo(ballroom);
    //game.addAgent(napolean);
    //game.addAgent(kafka);

    //Thing *liberty = new Thing("Statue of Liberty",
     //                          "A miniature Statue of Liberty", 5);
    //Thing *hoop = new Thing("Hoop", "A basketball hoop", 30);
    //liberty->moveTo(entrance);
    //hoop->moveTo(ballroom);

    cout << "Welcome!" << endl;

    // the step() function in the Game class will eventually
    // return false, when a player chooses to quit;
    // this tiny "while" loop keeps asking the game.step()
    // function if it is false or true; the effect is
    // that the step() function is called repeatedly
    // until it returns false
    while(game.step());

    return 0;

}
