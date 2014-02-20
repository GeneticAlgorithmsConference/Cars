#ifndef DISCRETE_RECOMBINATION_H
#define DISCRETE_RECOMBINATION_H

#include "base_recombination.h"
#include "dnatypes.h"

namespace Genetic
{

template <typename T>
class DiscreteRecombination : public Recombination
{
public:
	void process(Dna& parent_dna1, Dna& parent_dna2,
	             Dna& child_dna1, Dna& child_dna2);
private:

};

}

template <typename T>
void Genetic::DiscreteRecombination <T>::process(Dna& _parent_dna1, Dna& _parent_dna2,
                                                 Dna& _child_dna1, Dna& _child_dna2)
{
	BaseLinearDna <T>& parent_dna1 = dynamic_cast<BaseLinearDna <T>&>(_parent_dna1);
	BaseLinearDna <T>& parent_dna2 = dynamic_cast<BaseLinearDna <T>&>(_parent_dna2);
	BaseLinearDna <T>& child_dna1 = dynamic_cast<BaseLinearDna <T>&>(_child_dna1);
	BaseLinearDna <T>& child_dna2 = dynamic_cast<BaseLinearDna <T>&>(_child_dna2);
	child_dna1.resize(parent_dna1.size());
	child_dna2.resize(parent_dna2.size());
	for(int i = 0; i < parent_dna1.size(); ++i)
	{
		if(rand() & 1)
		{
			child_dna1[i] = parent_dna1[i];
		} else {
			child_dna1[i] = parent_dna2[i];
		}
		if(rand() & 1)
		{
			child_dna2[i] = parent_dna1[i];
		} else {
			child_dna2[i] = parent_dna2[i];
		}
	}
}

#endif
