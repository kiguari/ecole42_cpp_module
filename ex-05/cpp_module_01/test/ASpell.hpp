#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
    std::string name;
    std::string effect;
public:
    ASpell();
    ASpell(ASpell const &asp);
    ASpell &operator= (ASpell const &asp);
    virtual ~ASpell();

    ASpell(std::string const &n, std::string const &ef);

    std::string getName() const;
    std::string getEffects() const;

    virtual ASpell *clone()const = 0;

    void launch(ATarget const &tar) const;
};

#endif