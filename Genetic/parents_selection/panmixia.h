#ifndef PARENTS_SELECTION_PANMIXIA
#define PARENTS_SELECTION_PANMIXIA

#include <vector>

#include "base_selection.h"

namespace Genetic
{

template <typename I>
class Panmixia : public ParentsSelection <I>
{
public:
	void process(std::vector <I*>& individuals, std::vector <std::pair <I*, I*> >& parentsPairs);
private:
	
};

template <typename I>
void Panmixia<I>::process(std::vector <I*>& individuals, std::vector <std::pair <I*, I*> >& parentsPairs)
{
	// Recombination
	int individualsNum = individuals.size();
	for(int i = 0; i < individualsNum / 2; ++i)
	{
		int firstParent = rand() % individualsNum;
		int secondParent = rand() % (individualsNum - 1);
		if(secondParent >= firstParent)
		{
			++secondParent;
		}
		parentsPairs.push_back(std::make_pair(individuals[firstParent], individuals[secondParent]));
	}
}

}

#endif
