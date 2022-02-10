#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <vector>
#include <iostream>

class TargetGenerator
{
private:
    TargetGenerator(TargetGenerator const &t);
    TargetGenerator &operator= (TargetGenerator const &t);
    std::vector<ATarget *> tar_arr;
public:
    TargetGenerator();
    virtual ~TargetGenerator();
    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);
};

#endif