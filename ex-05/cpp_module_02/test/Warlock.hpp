#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>
#include"SpellBook.hpp"

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock();
    Warlock(Warlock const &w);
    Warlock &operator= (Warlock const &w);
    std::vector<ASpell *> sp_arr;
    SpellBook sp_book;
public:
    Warlock(std::string const &n, std::string const &t);
    ~Warlock();

    std::string const &getName() const;
    std::string const &getTitle() const;

    void setTitle(std::string const &tit);

    void introduce() const;

    void learnSpell(ASpell *asp);
    void forgetSpell(std::string n);
    void launchSpell(std::string n, ATarget const &tar);
};

#endif