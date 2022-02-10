#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
private:
    std::string name;
    std::string title;
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
};

#endif