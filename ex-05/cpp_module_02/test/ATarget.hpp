#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
    std::string attribute;
public:
    ATarget();
    ATarget(ATarget const &tar);
    ATarget &operator= (ATarget const &tar);
    ATarget(std::string const &tar);
    virtual ~ATarget();

    std::string const &getType() const;
    virtual ATarget *clone() const = 0;

    void getHitBySpell(ASpell const &asp) const;
};

#endif