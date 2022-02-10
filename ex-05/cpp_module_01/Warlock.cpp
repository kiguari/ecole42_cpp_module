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
    for(std::vector<ASpell *>::iterator i = arr.begin(); i != arr.end(); i++)
    {
        delete *i;
    }
    this->arr.clear();
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
    if(aspell_tpr)
    {
        for(std::vector<ASpell *>::iterator i = this->arr.begin(); i != this->arr.end(); i++)
        {
            if((*i)->getName() == aspell_tpr->getName())
                return ;
        }
        this->arr.push_back(aspell_tpr->clone());
    }
}
void Warlock::forgetSpell(std::string name)
{
    for(std::vector<ASpell *>::iterator i = this->arr.begin(); i != this->arr.end(); i++)
    {
        if((*i)->getName() == name)
        {
            delete *i;
            this->arr.erase(i);
            return ;
        }
    }
}

void Warlock::launchSpell(std::string name, ATarget const &atarget_ref)
{
    for(std::vector<ASpell *>::iterator i = this->arr.begin(); i != this->arr.end(); i++)
    {
        if((*i)->getName() == name)
        {
            (*i)->launch(atarget_ref);
            return ;
        }
    }
}