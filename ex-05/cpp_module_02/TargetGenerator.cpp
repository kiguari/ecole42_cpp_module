#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
    for(std::vector<ATarget *>::iterator i = arr_target.begin(); i != arr_target.end(); i++)
    {
            delete *i;
    }
    this->arr_target.clear();
}

void TargetGenerator::learnTargetType(ATarget *new_atarget)
{
    if(new_atarget)
    {
        for(std::vector<ATarget *>::iterator i = arr_target.begin(); i != arr_target.end(); i++)
        {
            if((*i)->getType() == new_atarget->getType())
                return ;
        }
        this->arr_target.push_back(new_atarget->clone());
    }
}

void TargetGenerator::forgetTargetType(std::string const &new_target_type)
{
    for(std::vector<ATarget *>::iterator i = arr_target.begin(); i != arr_target.end(); i++)
    {
        if((*i)->getType() == new_target_type)
        {
            delete *i;
            this->arr_target.erase(i);
            return ;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const &creat_target)
{
    for(std::vector<ATarget *>::iterator i = arr_target.begin(); i != arr_target.end(); i++)
    {
        if((*i)->getType() == creat_target)
            return (*i);
    }
    return (NULL);
}