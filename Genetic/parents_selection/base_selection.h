#ifndef BASE_SELECTION_H
#define BASE_SELECTION_H

#include "individual.h"

namespace Genetic
{

class ParentsSelection
{
public:
	virtual void process(std::vector <Individual*>& individuals, std::vector <std::pair <Individual*, Individual*> >& parentsPairs) = 0;
private:

};

}

#endif
