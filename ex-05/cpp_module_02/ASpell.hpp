#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private: //protected:
    std::string name;
    std::string effects;

public:
    ASpell();
    ASpell(ASpell const &new_aspell);
    ASpell(std::string const &new_name, std::string const &new_effects);
    ASpell &operator=(ASpell const &new_aspell);
    virtual ~ASpell();

    std::string const &getName() const;
    std::string const &getEffects() const;
    virtual ASpell *clone() const = 0;

    void launch(ATarget const &atarget_ref) const;    
};

#endif