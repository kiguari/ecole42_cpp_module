#include "Warlock.hpp"

Warlock::Warlock(std::string const &new_name, std::string const &new_title)
{
    this->name = new_name;
    this->title = new_title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
    return(this->name);
}
std::string const &Warlock::getTitle() const
{
    return(this->title);
}

void Warlock::setTitle(std::string const &new_title)
{
    this->title = new_title;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *aspell_tpr)
{
    this->s_book.learnSpell(aspell_tpr);
}
void Warlock::forgetSpell(std::string name)
{
    this->s_book.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget const &atarget_ref)
{
    ASpell *tmp = this->s_book.createSpell(name);
    if(tmp)
        tmp->launch(atarget_ref);
}