#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "elements.hpp"

struct MolecularDivision
{
public:
	Element mElement;
	int Count;
	int PrimaryOxidationState;

	static MolecularDivision with(Element element, int count);
	static MolecularDivision with(Element element, int count, int primaryOxidationState);
private:
	MolecularDivision(Element element, int count, int primaryOxidationState)
		: mElement(element), Count(count), PrimaryOxidationState(primaryOxidationState){}
};


class Molecule
{
public:
	std::vector<MolecularDivision> MoleculeParts;
	float MolecularMass;
	float PartCount;

	static Molecule with(std::vector<MolecularDivision> moleculeParts);
	std::string Stringify();
};