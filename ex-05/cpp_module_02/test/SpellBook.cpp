#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook()
{
    for(std::vector<ASpell *>::iterator i = this->asp_arr.begin(); i != this->asp_arr.end(); i++)
    {
        delete *i;
    }
}

    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);

void SpellBook::learnSpell(ASpell *asp)
{
    if(asp)
    {
        for(std::vector<ASpell *>::iterator i = this->asp_arr.begin(); i != this->asp_arr.end(); i++)
        {
            if((*i)->getName() == asp->getName())
                return;
        }
        this->asp_arr.push_back(asp->clone());
    }
}

void SpellBook::forgetSpell(std::string const &n)
{
    for(std::vector<ASpell *>::iterator i = this->asp_arr.begin(); i != this->asp_arr.end(); i++)
    {
        if((*i)->getName() == n)
        {
            delete *i;
            this->asp_arr.erase(i);
            return;
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &n)
{
    for(std::vector<ASpell *>::iterator i = this->asp_arr.begin(); i != this->asp_arr.end(); i++)
    {
        if((*i)->getName() == n)
        {
            return(*i);
        }
    }
    return(NULL);
}

// void Warlock::launchSpell(std::string n, ATarget const &tar)
// {
//     for(std::vector<ASpell *>::iterator i = this->sp_arr.begin(); i != this->sp_arr.end(); i++)
//     {
//         if((*i)->getName() == n)
//         {
//             (*i)->launch(tar);
//             return;
//         }
//     }
// }