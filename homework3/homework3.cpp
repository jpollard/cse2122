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
#define DEAD  ' '
#define ALIVE '#' 

bool isAlive(vector< vector<char> > &world, int y, int x){
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
  if(world[top][left] == ALIVE){
    num_neighbor++;
  }
  if(world[y][left] == ALIVE){
    num_neighbor++;
  }
  if(world[bottom][left] == ALIVE){
    num_neighbor++;
  }
  // test mid top and bottom
  if(world[top][x] == ALIVE){
    num_neighbor++;
  }
  if(world[bottom][x] == ALIVE){
    num_neighbor++;
  }
  // test right side
  if(world[top][right] == ALIVE){
    num_neighbor++;
  }
  if(world[y][right] == ALIVE){
    num_neighbor++;
  }
  if(world[bottom][right] == ALIVE){
    num_neighbor++;
  }

  // now that we have a count of the neighbors, we can determine if the
  // cell should live, die or be born.
  if(world[y][x] == ALIVE){
    if(num_neighbor < 2 || num_neighbor > 3){
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
    for(int i = 0; i < ROWS; i++) {
      for(int j = 0; j < COLS; j++){
     	world[i][j] = world_copy[i][j];
      }
    }
    
}

void display(vector< vector<char> > &world, int count)
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
    cout << "Generation: " << count << endl;
}

int main()
{
    vector< vector<char> > world(ROWS, vector<char>(COLS, DEAD));
    vector< vector<char> > copy(ROWS, vector<char>(COLS, DEAD));
    int gen_count = 0;

    // set some cells of world to ALIVE for initial configuration
    world[1][1] = world[1][2] = world[1][3] = ALIVE;
    world[20][20] = world[20][19] = world[19][19] = world[19][20] = world[18][20] = ALIVE;
    world[0][0] = world[0][1] = world[0][2] = ALIVE;
    world[13][50] = world[14][50] = world[13][51] = world[12][50] = world[13][49] = ALIVE;
    world[10][40] = world[10][41] = world[10][42] = world[9][40] = world[9][41] = world[9][42] = ALIVE;
    world[8][10] = world[8][7] = world[9][11] = world[8][9] = ALIVE;
    world[5][4] = world[6][4] = world[7][4] = world[6][6] = world[7][5] = ALIVE;
    while(true)
    {
        // clear the screen and display the world
        system("clear"); // linux / Mac OS X
        // system("cls"); // Windows
        display(world, gen_count);
	// wait for some time
        usleep(500000); // linux / Mac OS X
        // Sleep(800); // Windows

        // update the world
        generation(world, copy);
	gen_count++;
    }
    return 0;
}

