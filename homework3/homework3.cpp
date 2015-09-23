// Filename: homework3.cpp
// created on: 09/22/2015
// created by: Joseph Pollard
// synopsis: Conways game of life

#include<iostream>
#include<vector>
#include<unistd.h> // linux / Mac OS X
// #include<windows.h> // Windows
#include<cstdlib>
using namespace std;

// You can change the size of your world matrix in your entire code 
// just by changing the values of ROWS and COLS here.
#define ROWS 21
#define COLS 80

// You can change the characters used to represent DEAD and ALIVE cells here
#define DEAD  '.'
#define ALIVE '*'

bool isAlive(vector< vector<char> > &world, int x, int y){
  // neighbor count
  int num_neighbor = 0;

  // initial values of the cells neighbors
  int left = x - 1;
  int right = x + 1;
  int top = y - 1;
  int bottom = y + 1;

  bool alive = false;

  // neighbor adjustments to get around edges
  if(x == 0){
    left = COLS - 1;
  }
  if(x == COLS - 1){
    right = 0;
  }
  if(y == 0){
    top = ROWS - 1;
  }
  if(y == ROWS - 1){
    bottom = 0;
  }

  // test if the neighbor is alive, if so add to neighbor count
  // test left side
  if(world[left][top] == ALIVE){
    num_neighbor++;
  }
  if(world[left][y] == ALIVE){
    num_neighbor++;
  }
  if(world[left][bottom] == ALIVE){
    num_neighbor++;
  }
  // test mid top and bottom
  if(world[x][top] == ALIVE){
    num_neighbor++;
  }
  if(world[x][bottom] == ALIVE){
    num_neighbor++;
  }
  // test right side
  if(world[right][top] == ALIVE){
    num_neighbor++;
  }
  if(world[right][y] == ALIVE){
    num_neighbor++;
  }
  if(world[right][bottom] == ALIVE){
    num_neighbor++;
  }

  // now that we have a count of the neighbors, we can determine if the
  // cell should live, die or be born.
  if(world[x][y] == ALIVE){
    if(num_neighbor < 3 || num_neighbor > 3){
      alive = false;
    } else {
      alive = true;
    }
  } else {
    if(num_neighbor == 3){
      alive = true;
    }
  }

  return alive;
}

void generation(vector< vector<char> > &world, 
                vector< vector<char> > &world_copy)
{
  

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
    //        look at world_copy[i][j]'s neighbors and count ones that are alive
    //        update world[i][j] based on it
    //        Be careful when dealing with cells on the boundary since they 
    //        do not have eight neighbors
	  if(isAlive(world, i, j)){
	    world_copy[i][j] = ALIVE;
	  } else {
	    world_copy[i][j] = DEAD;
	  }
        }
    }

    // move contents of world_copy to world
    // for(int i = 0; i < ROWS; i++) {
    //   for(int j = 0; j < COLS; j++){
    // 	world[i][j] = world_copy[i][j];
    //   }
    // }
    
}

void display(vector< vector<char> > &world)
{
    // display the 2D matrix
    // You can add more code to 'beautify' the display of the matrix
    for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                cout << world[i][j];
            }
            cout << endl;
        }
}

int main()
{
    vector< vector<char> > world(ROWS, vector<char>(COLS, DEAD));
    vector< vector<char> > copy(ROWS, vector<char>(COLS, DEAD));

    // set some cells of world to ALIVE for initial configuration
    world[1][1] = world[1][2] = world[1][3] = ALIVE;

    while(true)
    {
        // clear the screen and display the world
        system("clear"); // linux / Mac OS X
        // system("cls"); // Windows
        display(world);

        // wait for some time
        usleep(800000); // linux / Mac OS X
        // Sleep(800); // Windows

        // update the world
        generation(world, copy);
    }
    return 0;
}

