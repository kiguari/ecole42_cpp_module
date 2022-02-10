#include "ASpell.hpp"

ASpell::ASpell(){}
ASpell::ASpell(ASpell const &asp)
{
    *this = asp;
}
ASpell &ASpell::operator= (ASpell const &asp)
{
    this->name = asp.name;
    this->effect = asp.effect;
    return(*this);
}
ASpell::~ASpell() {}

ASpell::ASpell(std::string const &n, std::string const &ef)
{
    this->name = n;
    this->effect = ef;
}

std::string ASpell::getName() const
{
    return(this->name);
}
std::string ASpell::getEffects() const
{
    return(this->effect);
}

void ASpell::launch(ATarget const &tar) const
{
    tar.getHitBySpell((*this));
}