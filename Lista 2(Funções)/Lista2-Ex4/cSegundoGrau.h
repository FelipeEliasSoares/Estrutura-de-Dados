/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cSegundoGrau.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 09:32
 */

#ifndef CSEGUNDOGRAU_H
#define CSEGUNDOGRAU_H

class cSegundoGrau {
public:
    cSegundoGrau();
    cSegundoGrau(const cSegundoGrau& orig);
    virtual ~cSegundoGrau();
    
    void lerNumeros();
    float Delta(int a,int b, int c);
    
private:

};

#endif /* CSEGUNDOGRAU_H */

