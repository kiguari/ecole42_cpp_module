#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock();
    Warlock(Warlock const &w);
    Warlock &operator= (Warlock const &w);
public:
    Warlock(std::string const &n, std::string const &t);
    ~Warlock();

    std::string const &getName() const;
    std::string const &getTitle() const;

    void setTitle(std::string const &tit);

    void introduce() const;
};

#endif