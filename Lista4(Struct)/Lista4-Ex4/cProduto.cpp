/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cProduto.cpp
 * Author: felipe
 * 
 * Created on 12 de setembro de 2022, 10:18
 */

#include "cProduto.h"
#include <iostream>

using namespace std;
cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}



void cProduto :: cadastro(){
    int quantidade,codigo;
    
    cout << "Informe quantos produtos, voce deseja cadastrar: ";
    cin>>quantidade;
    
    produto tabela[quantidade];
    
    for(int i=0;i<quantidade;i++){
        cout<<"Informe o codigo do produto: ";
        cin>>tabela[i].codigo;
        
        cout<<"Informe o nome do Produto: ";
        cin>>tabela[i].nome_produto;
        
        cout<<"Digite o preco do Produto: ";
        cin>>tabela[i].preço;
        
        cout<< endl;
    }
    
    cout<< "Digite o codigo, para ser consultado: ";
    cin>>codigo;
    
    cout<<"O preco desse produto é "<<this->pesquisa(tabela, quantidade,codigo);
    
}
 
void cProduto :: bolha(produto tabela[], int quantidade){
        int i, j;
        produto temp;
        bool troca = true;
        for (i= quantidade-1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j= 0; j < i ;j++)
            if (tabela[j].codigo < tabela[j+1].codigo) {
                temp = tabela[j];
                tabela[j] = tabela[j+1];
                tabela[j+1] = temp;
                troca = true;
                }
            }  
}


float cProduto :: pesquisa(produto tabela[], int quantidade, int codigo){
    bool encontrado=false;
    
    for(int i=0;i<quantidade;i++){

        if(tabela[i].codigo== codigo){
            return tabela[i].preço;
            encontrado=true;
        }
        if(!encontrado){
            cout<<"Nao encontrado";
        }
    }  
};


