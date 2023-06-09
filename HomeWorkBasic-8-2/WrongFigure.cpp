#include<stdexcept>
#include "WrongFigure.h"

WrongFigure::WrongFigure(std::string error) : std::domain_error(error) {};

const char* WrongFigure::what() const {
	return std::domain_error::what();
}