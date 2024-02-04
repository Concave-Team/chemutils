#pragma once
#include <iostream>
#include <vector>

struct OxidationStates
{
public:
	std::vector<int> States;

	OxidationStates(std::vector<int> states);
};

class Element
{
public:
	std::string Symbol;
	std::string FullName;
	int AtomicNumber;
	float AtomicMass;
	OxidationStates States;

	static Element of(std::string symbol, std::string fullName, int atomicNumber, float atomicMass, OxidationStates states);

private:
	Element(std::string symbol, std::string fullName, int atomicNumber, float atomicMass, OxidationStates states)
		: Symbol(symbol), FullName(fullName), AtomicNumber(atomicNumber), AtomicMass(atomicMass), States(states) {}
};