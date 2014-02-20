#ifndef LINEARBINARYDNA_H
#define LINEARBINARYDNA_H

#include <stdlib.h>

#include "baselineardna.h"

namespace Genetic
{
	class LinearBinaryDna : public BaseLinearDna<unsigned char>
	{
	public:
		void mutate(double parameter = 0.0) override;
		void generate(int size);
		double getDistance(Genetic::Dna& dna) override;
		void print();
	};

}

#endif
