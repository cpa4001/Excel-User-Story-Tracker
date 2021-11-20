/*
        Name: Developer.cpp
        Author: Christian Apostoli
        Purpose: implementation file for Developer class
                 inherits from Collaborator class

*/

#include "Developer.h"

/*
    Constructor for Developer - calls Collaborator Constructor
    Param:
    name    name of the Developer
*/
Developer::Developer(std::string name) : Collaborator(name, "Developer") {}

/*
    Assigns story to the vector of Stories that devloper is working on it
    Param:
    storyID the integer ID of the UserStory
*/
void Developer::assignStory(int storyID) {
  storiesWorkingOn.push_back(storyID);
}
