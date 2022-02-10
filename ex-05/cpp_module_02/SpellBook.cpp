#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    for(std::vector<ASpell *>::iterator i = this->arr_spell.begin(); i != this->arr_spell.end(); i++)
    {
        delete *i;
    }
    this->arr_spell.clear();
}

void SpellBook::learnSpell(ASpell *aspell_tpr)
{
    if(aspell_tpr)
    {
        for(std::vector<ASpell *>::iterator i = this->arr_spell.begin(); i != this->arr_spell.end(); i++)
        {
            if((*i)->getName() == aspell_tpr->getName())
                return ;
        }
        this->arr_spell.push_back(aspell_tpr->clone());
    }
}

void SpellBook::forgetSpell(std::string const &name)
{
    for(std::vector<ASpell *>::iterator i = this->arr_spell.begin(); i != this->arr_spell.end(); i++)
    {
        if((*i)->getName() == name)
        {
            delete *i;
            this->arr_spell.erase(i);
            return ;
        }
    }
}

ASpell *SpellBook::createSpell(std::string const &name)
{
    for(std::vector<ASpell *>::iterator i = this->arr_spell.begin(); i != this->arr_spell.end(); i++)
    {
        if((*i)->getName() == name)
            return (*i);
    }
    return(NULL);
}