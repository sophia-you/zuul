#include <iostream>
#include <map>
#include <cstring>
#include "room.h"
using namespace std;

int main()
{
  // DIRECTIONS
  char* north = new char[100];
  char* south = new char[100];
  char* east = new char[100];
  char* west = new char[100];
  strcpy(north, "north");
  strcpy(south, "south");
  strcpy(east, "east");
  strcpy(west, "west");

  // ROOMS AND ROOM DESCRIPTIONS

  // chow mein noodle house
  char* chowmeinDescription = new char[100];
  strcpy(chowmeinDescription, "You are in the Chow Mein noodle house.");
  Room* chowmein = new Room(chowmeinDescription);

  // rice cake stall
  char* ricecakeDescription = new char[100];
  strcpy(ricecakeDescription, "You have arrived at the rice cake food stall.");
  Room* ricecake = new Room(ricecakeDescription);

  // ramen restaurant
  char* ramenDescription = new char[100];
  strcpy(ramenDescription, "You have walked inside the ramen restaurant.");
  Room* ramen = new Room(ramenDescription);

  // sesame ball stall
  char* sesameDescription = new char[100];
  strcpy(sesameDescription, "You have arrived at the sesame ball food stall.");
  Room* sesame = new Room(sesameDescription);

  // pancake stall
  char* pancakeDescription = new char[100];
  strcpy(pancakeDescription, "You have arrived at the pancake food stall.");
  Room* pancake = new Room(pancakeDescription);

  // spring roll stall
  char* springrollDescription = new char[100];
  strcpy(springrollDescription, "You have arrived at the spring roll food stall.");
  Room* springroll = new Room(springrollDescription);

  // wonton stall
  char* wontonDescription = new char[100];
  strcpy(wontonDescription, "You have arrived at the wonton food stall.");
  Room* wonton = new Room(wontonDescription);

  // pho restaurant
  char* phoDescription = new char[100];
  strcpy(phoDescription, "You have entered the pho restuarant.");
  Room* pho = new Room(phoDescription);

  // central park
  char* parkDescription = new char[100];
  strcpy(parkDescription, "You have stepped outside into Central Park. Wild animals roam free in the bamboo forest.");
  Room* park = new Room(parkDescription);

  // udon restaurant
  char* udonDescription = new char[100];
  strcpy(udonDescription, "You have entered the Grand Udon Restaurant.");
  Room* udon = new Room(udonDescription);

  // tofu palace
  char* tofuDescription = new char[100];
  strcpy(tofuDescription, "You are in the largest restaurant at the Dragon's Market, Tofu Palace.");
  Room* tofu = new Room(tofuDescription);

  // entrance
  char* entranceDescription = new char[100];
  strcpy(ricecakeDescription, "You stand at the entrance of the Dragon's Market.");
  Room* entrance = new Room(entranceDescription);

  // dumpling house
  char* dumplingDescription = new char[100];
  strcpy(dumplingDescription, "You have arrived at the most popular restaurant in the Market, the Dumpling House.");
  Room* dumpling = new Room(dumplingDescription);

  // bathroom
  char* bathroomDescription = new char[100];
  strcpy(bathroomDescription, "You have entered a small, dirty room with an old toilet. It is the bathroom.");
  Room* bathroom = new Room(bathroomDescription);

  // bakery
  char* bakeryDescription = new char[100];
  strcpy(bakeryDescription, "You have arrived at the Fresh Bread Bakery, which sells a variety of aromatic baked goods.");
  Room* bakery = new Room(bakeryDescription);

  // EXITS
  chowmein->setExit(east, ricecake);
  chowmein->setExit(south, springroll);
  
  ricecake->setExit(west, chowmein);
  ricecake->setExit(east, ramen);

  ramen->setExit(west, ricecake);
  ramen->setExit(south, park);
  ramen->setExit(east, sesame);

  sesame->setExit(west, ramen);
  sesame->setExit(south, pancake);

  pancake->setExit(north, sesame);
  pancake->setExit(south, udon);

  springroll->setExit(north, chowmein);
  springroll->setExit(south, wonton);

  wonton->setExit(north, springroll);
  wonton->setExit(east, pho);

  pho->setExit(west, wonton);
  pho->setExit(south, tofu);
  pho->setExit(east, park);

  park->setExit(north, ramen);
  park->setExit(west, pho);
  park->setExit(south, entrance);

}
