#include "Figure.h"

Figure::Figure() {
    this->figureName = "������";
}

Figure::Figure(std::string figureName) {
    this->figureName = figureName;
}

std::string Figure::getFigureName() {
    return figureName;
}