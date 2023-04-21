#pragma once
#include <string>

class Text 
{
public:
    virtual void render(const std::string& data) const;
};