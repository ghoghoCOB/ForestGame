#include "obstacle.h"
#include <iostream>

using namespace std;

Obstacle::Obstacle() {
     o_x = 0 ;
     o_y = 0 ;
     o_diametre = 0 ;
     o_hauteur = 0 ;
}

Obstacle::Obstacle(int x, int y, int diametre, int hauteur) {
    o_x = x ;
    o_y = y ;
    o_diametre = diametre ;
    o_hauteur = hauteur ;
}

Obstacle::Obstacle(Obstacle const& tocopy) {
    o_x = tocopy.o_x ;
    o_y = tocopy.o_y ;
    o_diametre = tocopy.o_diametre ;
    o_hauteur = tocopy.o_hauteur ;
}

Obstacle::~Obstacle() {

};

int Obstacle::getX() const {
    return o_x ;
}

int Obstacle::getY() const {
    return o_y ;
}

int Obstacle::getD() const {
    return o_diametre ;
}

void Obstacle::recevoirDegats(int nbDegats) {
    if (o_force > 0) {
        o_force -= nbDegats ;
    } else
    {
        Obstacle::~Obstacle();
    }
}