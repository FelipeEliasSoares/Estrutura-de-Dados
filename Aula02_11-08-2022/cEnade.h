/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cEnade.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 08:15
 */

#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    
    //Atributos
    int M[3][4];
     
    //Metados
    cEnade();
    cEnade(const cEnade& orig);
    virtual ~cEnade();
    
    void dadosMatriz();
    void imprimeMatriz();

private:

};

#endif /* CENADE_H */

