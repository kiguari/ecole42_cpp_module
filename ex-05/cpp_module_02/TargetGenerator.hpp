#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP

#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
private:
    std::vector<ATarget *> arr_target;

    TargetGenerator(TargetGenerator const &new_targetgentration);
    TargetGenerator &operator= (TargetGenerator const &new_TargetGenerator);
public:
    TargetGenerator();
    virtual ~TargetGenerator();
    void learnTargetType(ATarget *new_atarget);
    void forgetTargetType(std::string const &new_target_type);
    ATarget* createTarget(std::string const &creat_target);
};

#endif