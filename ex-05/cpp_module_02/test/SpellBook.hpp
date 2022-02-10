#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
private:
    SpellBook(SpellBook const &sp);
    SpellBook &operator= (SpellBook const &sp);
    std::vector<ASpell *> asp_arr;
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);
};

#endif