#ifndef BASE_RECOMBINATION_H
#define BASE_RECOMBINATION_H

#include "dna.h"

namespace Genetic
{

class Recombination
{
public:
	virtual void process(Dna& parent_dna1, Dna& parent_dna2,
	                     Dna& child_dna1, Dna& child_dna2) = 0;
private:

};

}

#endif
