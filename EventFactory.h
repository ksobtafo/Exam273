#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "event.h"
#include "partyEvent.h"
#include "dinnerEvent.h"
#ifndef EVENTFACTORY_H
#define EVENTFACTORY_H

class EventFactory {
public:
	event * factory(std::string type)
	{
		if (type == "party")
		{
			return new partyEvent();
		}
		else if (type == "dinner event")
		{
			return new dinnerEvent;
		}
		else throw std::invalid_argument("what kind of event is this ?");
	}
	//the only method to create your own custom event type...
};
#endif
