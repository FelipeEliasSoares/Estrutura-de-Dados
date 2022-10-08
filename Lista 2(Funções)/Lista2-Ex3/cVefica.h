/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cVefica.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 09:21
 */

#ifndef CVEFICA_H
#define CVEFICA_H

class cVefica {
public:
    cVefica();
    cVefica(const cVefica& orig);
    virtual ~cVefica();
    
    void lerNumeros();
    int resultado(int numero);
private:

};

#endif /* CVEFICA_H */

