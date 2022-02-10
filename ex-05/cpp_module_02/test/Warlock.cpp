#include "Warlock.hpp"

Warlock::Warlock(std::string const &n, std::string const &t)
{
    this->name = n;
    this->title = t;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    for(std::vector<ASpell *>::iterator i = this->sp_arr.begin(); i != this->sp_arr.end(); i++)
    {
        delete *i;
    }
}

std::string const &Warlock::getName() const
{
    return(this->name);
}
std::string const &Warlock::getTitle() const
{
    return(this->title);
}

void Warlock::setTitle(std::string const &tit)
{
    this->title = tit;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" <<std::endl;
}

void Warlock::learnSpell(ASpell *asp)
{
    this->sp_book.learnSpell(asp);
}

void Warlock::forgetSpell(std::string n)
{
    this->sp_book.forgetSpell(n);
}

void Warlock::launchSpell(std::string n, ATarget const &tar)
{
    ASpell *tmp = this->sp_book.createSpell(n);
    if(tmp)
        tmp->launch(tar);
}