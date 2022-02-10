#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
    std::string attribute;
    // std::string 

public:
    ATarget();
    ATarget(ATarget const &new_atarget);
    ATarget(std::string const &new_attribute);
    ATarget &operator=(ATarget const &new_atarget);
    virtual ~ATarget();

    std::string const &getType() const;
    virtual ATarget *clone() const = 0;
    void getHitBySpell(ASpell const &aspell_ref) const;
};

#endif