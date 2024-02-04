#include "molecules.hpp"

MolecularDivision MolecularDivision::with(Element element, int count)
{
	MolecularDivision division(element, count, element.States.States[0]);
	return division;
}

MolecularDivision MolecularDivision::with(Element element, int count, int primaryOxidationState)
{
	MolecularDivision division(element, count, primaryOxidationState);
	return division;
}

Molecule Molecule::with(std::vector<MolecularDivision> moleculeParts)
{
	Molecule mol;
	mol.MolecularMass = 0;
	mol.MoleculeParts = moleculeParts;
	mol.PartCount = moleculeParts.size();

	for (MolecularDivision e : mol.MoleculeParts)
	{
		mol.MolecularMass += e.Count * e.mElement.AtomicMass;
	}

	return mol;
}

std::string Molecule::Stringify()
{
	std::string mol = "";
	for (MolecularDivision e : this->MoleculeParts)
	{
		mol += e.mElement.Symbol + std::to_string(e.Count);
	}
	return mol;
}