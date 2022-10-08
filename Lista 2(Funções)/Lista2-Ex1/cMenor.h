/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMenor.h
 * Author: felipe
 *
 * Created on 5 de setembro de 2022, 11:09
 */

#ifndef CMENOR_H
#define CMENOR_H

class cMenor {
public:
    cMenor();
    cMenor(const cMenor& orig);
    virtual ~cMenor();
    
    void lerNumeros();
    float Menor(float n1,float n2);
private:

};

#endif /* CMENOR_H */

