#include <stdexcept>
#pragma once

class WrongFigure : std::domain_error {
public:
	WrongFigure(std::string error);
	const char* what() const override;
};