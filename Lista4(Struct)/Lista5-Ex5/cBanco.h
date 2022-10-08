/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cBanco.h
 * Author: felipe
 *
 * Created on 12 de setembro de 2022, 18:53
 */

#ifndef CBANCO_H
#define CBANCO_H

struct conta{
    char nome[40];
    int cpf;
    float saldo;
};

class cBanco {
public:
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    
    void cadastro();
    void pesquisa(conta conta[],int opc);
    void operação(conta conta[],int opc,int cpf);
    
    
private:

};

#endif /* CBANCO_H */

