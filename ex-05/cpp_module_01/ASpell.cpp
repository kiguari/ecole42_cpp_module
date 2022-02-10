#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(ASpell const &new_aspell)
{
    *this = new_aspell;
}

ASpell::ASpell(std::string const &new_name, std::string const &new_effects)
{
    this->name = new_name;
    this->effects = new_effects;
}

ASpell &ASpell::operator=(ASpell const &new_aspell)
{
    this->name = new_aspell.name;
    this->effects = new_aspell.effects;
    return(*this);
}

ASpell::~ASpell() {}

std::string const &ASpell::getName() const
{
    return(this->name);
}

std::string const &ASpell::getEffects() const
{
    return(this->effects);
}

void ASpell::launch(ATarget const &atarget_ref) const
{
    atarget_ref.getHitBySpell((*this));
}