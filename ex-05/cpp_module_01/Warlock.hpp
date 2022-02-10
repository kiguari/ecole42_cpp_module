#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class Warlock
{
private:
    std::string name;
    std::string title;
    std::vector<ASpell *> arr;
    Warlock();
    Warlock(Warlock const &new_warloc);
    Warlock &operator=(Warlock const &new_warlock);
public:
    Warlock(std::string const &new_name, std::string const &new_title);
    ~Warlock();
    std::string const &getName() const;
    std::string const &getTitle() const;

    void setTitle(std::string const &new_title);
    void introduce() const;

    void learnSpell(ASpell *aspell_tpr);
    void forgetSpell(std::string name);
    void launchSpell(std::string name, ATarget const &atarget_ref);

};

#endif