#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <vector>

class SpellBook
{
private:
    std::vector<ASpell *> arr_spell;
    SpellBook(SpellBook const &new_spellbook);
    SpellBook &operator=(SpellBook const &new_spellbook);
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell *aspell_ptr);
    void forgetSpell(std::string const &name);
    ASpell* createSpell(std::string const &name);
};

#endif