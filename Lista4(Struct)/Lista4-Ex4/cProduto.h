/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cProduto.h
 * Author: felipe
 *
 * Created on 12 de setembro de 2022, 10:18
 */

#ifndef CPRODUTO_H
#define CPRODUTO_H

struct produto{
    char nome_produto[40];
    float preço;
    int codigo;
};

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    void cadastro();
    void bolha(produto tabela[],int quantidade);
    float pesquisa(produto tabela[],int codigo, int quantidade);
    
private:

};

#endif /* CPRODUTO_H */

