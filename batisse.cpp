#include "batisse.h"
#include <iostream>

using namespace std;

Batisse::Batisse() {
	Obstacle();
}

Batisse::Batisse(int x, int y, int diametre, int hauteur): Obstacle(x, y, diametre, hauteur) {
	
}

Batisse::Batisse(Batisse const& tocopy) {
    o_x = tocopy.o_x ;
    o_y = tocopy.o_y ;
    o_diametre = tocopy.o_diametre ;
    o_hauteur = tocopy.o_hauteur ;
}

Batisse::~Batisse() {

};
