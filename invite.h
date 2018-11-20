#include <iostream>
#include <string>
#include "event.h"

#ifndef INVITE_H
#define INVITE_H

class invite : public event
{
private:
	event * theEvent;
public:

	void leave()

	{
		//allows the party goer to leave the party 
		//delete theEvent;
		event*theEvent = dynamic_cast<event*>(theEvent);
		*theEvent = &remove(me); //supposed to call remove party event method to erase the party goers identifyed by me....hhuhnjnnt

	}
	                             //FIX ME!...
	
	
	};
#endif
