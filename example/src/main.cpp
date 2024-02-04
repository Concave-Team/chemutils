#include <iostream>
#include "molecules.hpp"

int main()
{
	Element carbon = Element::of("C", "Carbon", 6, 12.f, { {-4,4} });
	Element hydrogen = Element::of("H", "Hydrogen", 1, 1.f, { {1} });
	Element oxygen = Element::of("O", "Oxygen", 6, 16.f, { {-2} });

	Molecule mol = Molecule::with({ MolecularDivision::with(carbon, 6), MolecularDivision::with(hydrogen, 12), MolecularDivision::with(oxygen, 6) });
	std::cout << mol.Stringify() << ": Molecular mass: " << mol.MolecularMass << " .";
}