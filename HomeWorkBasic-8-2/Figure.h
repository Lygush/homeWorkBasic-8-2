#include <string>
#pragma once

class Figure {
protected:
    std::string figureName{};

public:
    Figure();

    Figure(std::string figureName);

    std::string getFigureName();

    virtual std::string Info() = 0;
};