/*
Note from the creator, Sam Kass:

    “I invented this game (with Karen Bryla) because it seems like when you know someone well enough, 75-80% of any Rock Paper Scissors games you play with that person end up in a tie. Well, here is a slight variation that reduces that probability. This version is also nice because it satisfies the Law of Fives.”

Before we get started, watch this video to get acquainted with the game:
https://youtu.be/iSHPVCBsnLw 

The logic:

    Scissors cuts Paper.
    Paper covers Rock.
    Rock crushes Lizard.
    Lizard poisons Spock.
    Spock smashes Scissors.
    Scissors decapitate Lizard.
    Lizard eats Paper.
    Paper disproves Spock.
    Spock vaporizes Rock.
    (and as it always has) Rock crushes Scissors.

We will first tackle Rock, Paper, Scissors first, before making it into Rock, Paper, Scissors, Lizard, Spock!

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

  // Live long and prosper
  //give a random number each time the program is run
  srand (time(NULL));

//the computer's number
int computer = rand() % 3 + 1;

//the users number
int user = 0;

//Start the game display
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";


// Reference for this section: http://www.cplusplus.com/doc/tutorial/control/

cin >> user;

if(user == computer) {

}

}

