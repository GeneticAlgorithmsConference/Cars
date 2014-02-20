#ifndef TEST_INDIVIDUAL_H
#define TEST_INDIVIDUAL_H

#include <iostream>

#include "individual.h"
#include "dnatypes.h"

using namespace Genetic;

class TestIndividual : public Individual <LinearBinaryDna, int>
{
public:
	TestIndividual();
	TestIndividual& operator=(const TestIndividual& individual);
	void generate();
	void test();
	void mutate(Genetic::GeneticSettings& geneticSettings);
private:
	const int desiredValue = 18172;
};

TestIndividual::TestIndividual()
{

}

TestIndividual& TestIndividual::operator=(const TestIndividual& individual)
{
	dna = individual.dna;
}

void TestIndividual::generate()
{
	dna.generate(30);
}

void TestIndividual::test()
{
	int currentValue = 0;
	for(int i = 0; i < dna.size(); ++i)
	{
		currentValue = currentValue * 2 + static_cast<int>(dna[i]);
	}
	int delta = currentValue - desiredValue;
	if(delta < 0)
	{
		delta = -delta;
	}
	score = delta;
}

void TestIndividual::mutate(Genetic::GeneticSettings& geneticSettings)
{
	dna.mutate();
}

#endif
