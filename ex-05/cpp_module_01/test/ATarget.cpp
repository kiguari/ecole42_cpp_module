#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(ATarget const &tar)
{
    *this = tar;
}
ATarget &ATarget::operator= (ATarget const &tar)
{
    this->attribute = tar.attribute;
    return(*this);
}
ATarget::ATarget(std::string const &tar)
{
    this->attribute = tar;
}
ATarget::~ATarget() {}

std::string const &ATarget::getType() const
{
    return(this->attribute);
}

void ATarget::getHitBySpell(ASpell const &asp) const
{
    std::cout << this->attribute << " has been " << asp.getEffects() << "!" << std::endl;
}