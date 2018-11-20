#ifndef PLANNINGMTG_H
#define PLANNINGMTG_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "invite.h"

class PlanningMtg {
private:
	std::list<std::string> room; 

public:
	invite * add(std::string name) 
	{
		room.push_front(name);
		std::list<std::string> ::iterator it = room.begin();
		invite*theInvite = new PlanningMtg (room.begin());                                                      //FIX 
		//this adds the person's name to the list clled room in the planningmtg class
	};
	void list() 
	{
		std::list<std::string> ::iterator it = room.begin();
		for (it; it != room.end(); it++)
		{
			std::cout << *it << std::endl;
		}
		//iterates through the room list to print out the names of each person currently present
	}
	void remove(std::list<std::string> ::iterator &me) 
	{
		room.erase(me);
	};

};
#endif 
