#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "invite.h"


class event: class invite
{
private:

	std::list<std::string> name;
public:
	invite *add(std::string name) 
	{
		name.push_front(name1); // an invite is added to the fron ot the line
		std::list<std::string> ::iterator it = name.begin();

		invite*NewInvite = new invite(name.begin()); //this points to the recently added invited 
			return NewInvite;
			//adds a person with name into the event and returns an invite for that person
	};
	void list()
	{
		std::list<std::string> ::iterator it = name.begin();
		for (it; it != name.end(); it++)
		{
			std::cout << *it << std::endl; //prints out all the people currently at the event
		}
	}


};


#endif
