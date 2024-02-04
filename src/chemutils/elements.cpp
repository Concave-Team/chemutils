#include "elements.hpp"

OxidationStates::OxidationStates(std::vector<int> states)
{
	this->States = states;
}

Element Element::of(std::string symbol, std::string fullName, int atomicNumber, float atomicMass, OxidationStates states)
{
	Element e(symbol, fullName, atomicNumber, atomicMass, states);
	return e;
}
