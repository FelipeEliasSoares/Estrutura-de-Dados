/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIMC.h
 * Author: felipe
 *
 * Created on 12 de setembro de 2022, 08:58
 */

#ifndef CIMC_H
#define CIMC_H


struct pessoa{
    char nome[40],sexo;
    float altura,peso;
    long int cpf;

};

class cIMC {
public:
    cIMC();
    cIMC(const cIMC& orig);
    virtual ~cIMC();
    
    void cadastro();
    void imprimir(pessoa VetPessoas[],int n);
    int PesquisaBinaria(pessoa VetPessoa[],int cpf,int n);
    void PesquisaSequencial(pessoa VetPessoa[],int cpf,int n);
    void Bolha(pessoa VetPessoas[],int n);
    float imc(pessoa x);
    
    
private:

};

#endif /* CIMC_H */

