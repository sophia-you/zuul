#include <iostream>
#include <map>
#include <cstring>
#include <vector>
#include "room.h"
using namespace std;

Room::Room() // default constructor
{
  
}

Room::Room(char* newdescription) // constructor with description passed in
{
  description = new char[100];
  strcpy(description, newdescription);
}

Room::~Room() // destructor
{
  delete description;
}

void Room::setExit(char* direction, Room* nextRoom) // set exits of a room
{
  // direction = n/s/e/w and nextRoom = destination
  exits.insert(pair<char*, Room*>(direction, nextRoom));
}

void Room::printExits() // prints all possible exits
{
  // walks through the map of rooms
  for (map<char*, Room*>::iterator it = exits.begin(); it != exits.end(); it++)
    {
      cout << it->first << endl; // prints out the directions
    }
}


