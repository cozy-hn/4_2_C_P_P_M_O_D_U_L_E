#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(string type) : type(type)
{}

Weapon::~Weapon()
{}

const string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(string type)
{
	this->type = type;
}
