/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPessoa.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 10:34
 */

#ifndef CPESSOA_H
#define CPESSOA_H

#include <iostream>
#include <string>

using namespace std;
struct pessoa{
    string nome,end;
    long int tell,cpf;
};

class cPessoa {
public:
    
    
    
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    
    void cadPessoa();
    void imprimirDados(pessoa VetPessoas[], int n);
    struct pessoa buscarTelefone();
    void Bolha(pessoa VetPessoas[], int n) ;
    void Bolha2(pessoa VetPessoas[], int n) ;
    int PesquisaBinaria(pessoa VetPessoas[],int cpf,int n);
    
private:

};

#endif /* CPESSOA_H */

