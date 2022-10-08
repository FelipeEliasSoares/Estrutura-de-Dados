/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cTriangulo.h
 * Author: felipe
 *
 * Created on 5 de setembro de 2022, 10:23
 */

#ifndef CTRIANGULO_H
#define CTRIANGULO_H
#include <string>
#include <regex>
class cTriangulo {
public:
    cTriangulo();
    cTriangulo(const cTriangulo& orig);
    virtual ~cTriangulo();
    
    void Trianguilo();
    int Resposta(float a, float b, float c);
private:

};

#endif /* CTRIANGULO_H */

