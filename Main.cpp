#include <iostream>
#include <string>

#define GRID_SIZE 3

using namespace std;

int main( int argc, char *argv[] ){
    
    //cout << "Hello world" <<endl;
   
   char grid[GRID_SIZE] [GRID_SIZE];
   
   int number = 1;
   for ( int x = 0; x < GRID_SIZE; x++ ){
       for (int y = 0; y < GRID_SIZE; y++  ){
           grid[x][y] = to_string(number).c_str()[0];
           number += 1;
       }
   }
   printf("\n----------\n");
   for ( int x = 0; x < GRID_SIZE; x++ ){
       for (int y = 0; y < GRID_SIZE; y++  ){
          printf(" %c |", grid[x][y]); 
           }
        printf("\n----------\n");
   }
    return 0;
}