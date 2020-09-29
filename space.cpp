#include <iostream>
using namespace std;

/*
    It should ask him what his earth weight is.
    Ask him to enter a number for the planet he wants to fight on.
    It should then compute his weight on the destination planet.

Here is the table of conversion:
# 	Planet 	Relative Gravity
1 	Mercury 	0.38
2 	Venus 	0.91
3 	Mars 	0.38
4 	Jupiter 	2.34
5 	Saturn 	1.06
6 	Uranus 	0.92
7 	Neptune 	1.19
*/

//declarations

  double getEarthWeight();
  double getPlanet();
  double calcPlanetWeight(double,double);
  void displayWeight(double,double);

int main() {

double earthWeight,planet;
earthWeight = getEarthWeight();
planet = getPlanet();

displayWeight(earthWeight,planet);

}

double getEarthWeight() {
    
    double earthWeight;
    
    cout << "What is your weight on earth, in pounds? ";
    cin >> earthWeight;
    
    return earthWeight;
}

double getPlanet() {
    double planet;

cout << "Choose from the following planets for your fight-\n";
cout << "1- Mecury\n";
cout << "2- Venus\n";
cout << "3- Mars\n";
cout << "4- Jupiter\n";
cout << "5- Saturn\n";
cout << "6- Uranus\n";
cout << "7- Neptune\n";
    cout << "Please enter the number of the planet you want to fight on: ";
    cin >> planet;

    return planet;
}

void displayWeight(double earthWeight,double planet) {

double Mercury = 0.38;
double Venus = 0.91;
double Mars = 0.38;
double Jupiter = 2.34;
double Saturn = 1.06;
double Uranus = 0.92;
double Neptune = 1.19;


    if (planet == 1) {
        cout << "You've chosen to fight on Mercury, where you would weigh " << earthWeight * Mercury << " pounds.";
    }

    else if (planet == 2) {
        cout << "You've chosen to fight on Venus, where you would weigh " << earthWeight * Venus << " pounds.";
    }

    else if (planet == 3) {
        cout << "You've chosen to fight on Mars, where you would weigh " << earthWeight * Mars << " pounds.";
    }

    else if (planet == 4) {
        cout << "You've chosen to fight on Jupiter, where you would weigh " << earthWeight * Jupiter << " pounds.";
    }

    else if (planet == 5) {
        cout << "You've chosen to fight on Saturn, where you would weigh " << earthWeight * Saturn << " pounds.";
    }

    else if (planet == 6) {
        cout << "You've chosen to fight on Uranus, where you would weigh " << earthWeight * Uranus << " pounds.";
    }

    else if (planet == 7) {
        cout << "You've chosen to fight on Neptune, where you would weigh " << earthWeight * Neptune << " pounds.";
    }

    else {
        cout << "Oh no! You're drifting in space for this fight, so you weigh " << earthWeight * 0 << " pounds.";
    }
}