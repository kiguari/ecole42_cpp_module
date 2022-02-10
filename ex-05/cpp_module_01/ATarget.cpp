#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(ATarget const &new_atarget)
{
    *this = new_atarget;
}

ATarget::ATarget(std::string const &new_attribute)
{
    this->attribute = new_attribute;
}

ATarget &ATarget::operator=(ATarget const &new_atarget)
{
    this->attribute = new_atarget.attribute;
    return(*this);
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const
{
    return(this->attribute);
}

void ATarget::getHitBySpell(ASpell const &aspell_ref) const
{
    std::cout << this->attribute << " has been " << aspell_ref.getEffects() << std::endl;
}