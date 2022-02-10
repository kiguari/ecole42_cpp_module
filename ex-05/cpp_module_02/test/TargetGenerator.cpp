#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    for(std::vector<ATarget *>::iterator i = this->tar_arr.begin(); i != this->tar_arr.end(); i++)
    {
        delete *i;
    }
}

void TargetGenerator::learnTargetType(ATarget*asp)
{
    if(asp)
    {
        for(std::vector<ATarget *>::iterator i = this->tar_arr.begin(); i != this->tar_arr.end(); i++)
        {
            if((*i)->getType() == asp->getType())
            {
                return;
            }
        }
        this->tar_arr.push_back(asp->clone());
    }

}

void TargetGenerator::forgetTargetType(std::string const &n)
{
    for(std::vector<ATarget *>::iterator i = this->tar_arr.begin(); i != this->tar_arr.end(); i++)
    {
        if((*i)->getType() == n)
        {
            delete *i;
            this->tar_arr.erase(i);
            return;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const &n)
{
    for(std::vector<ATarget *>::iterator i = this->tar_arr.begin(); i != this->tar_arr.end(); i++)
    {
        if((*i)->getType() == n)
        {
            return(*i);
        }
    }
    return(NULL);
}