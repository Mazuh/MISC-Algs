#ifndef TRIDIMENSIONAL_H
#define TRIDIMENSIONAL_H

#include "geometryabstract.h"

/**
 * @brief Figura composta por uma base quadrangular e um vértice que une
 * as faces laterais da pirâmide
 */
class RectangularPyramid: public TridimensionalEntity{
private:
    double baseArea;
    double lateralArea;
    double height;
public:
    RectangularPyramid(double baseArea, double lateralArea, double height);
    virtual double calcArea();
    virtual double calcVolume();
};


/**
 * @brief Figura composta por seis faces quadrangulares
 */
class Cube: public TridimensionalEntity{
private:
    double edge;
public:
    Cube(double edge);
    virtual double calcArea();
    virtual double calcVolume();
};


/**
 * @brief Figura composta por seis faces, tendo três pares de faces idênticas
 * e paralelas entre si
 */
class Parallelepiped: public TridimensionalEntity{
private:
    double edge1;
    double edge2;
    double edge3;
public:
    Parallelepiped(double edge1, double edge2, double edge3);
    virtual double calcArea();
    virtual double calcVolume();
};


/**
 * @brief Figura resultante do conjunto de pontos do espaço cuja distância ao
 * centro é igual ou menor que o raio
 */
class Sphere: public TridimensionalEntity{
private:
    double radius;
public:
    Sphere(double radius);
    virtual double calcArea();
    virtual double calcVolume();
};

#endif
