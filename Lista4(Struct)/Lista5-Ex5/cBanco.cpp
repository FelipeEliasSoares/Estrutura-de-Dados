/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cBanco.cpp
 * Author: felipe
 * 
 * Created on 12 de setembro de 2022, 18:53
 */

#include "cBanco.h"
#include <iostream>

using namespace std;
cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}


void cBanco :: cadastro(){
    int n,opc,cpf;
    
    n=3;
    conta conta[n];
    
    for(int i=0;i<n;i++){
            cout<<"Digite seu nome: ";
            cin>>conta[i].nome;
            cout<<"Digite o CPF: ";
            cin>>conta[i].cpf;
            cout<<"Digite o seu deposito: ";
            cin>>conta[i].saldo;
            cout<<endl;  
    };
    
    while(opc!=0){
        cout<< "Deseja realizar um saque (1) ou deposito (2) e (0) para sair: ";
        cin>>opc;

        if(opc==1 || opc==2){
            cout<<"Informe o CPF para realizar a opecação: ";
            cin>>cpf;
            this->operação(conta,opc,cpf);
        }
        else{
            cout<<"Saindo...";
        }
    }
}

void cBanco :: operação(conta conta[], int opc,int cpf){
    float saque,deposito;
    bool v=false;
    
    if(opc==1){
        cout<<"Digite o valor a ser sacado: ";
        cin>>saque;
        cout<<endl;
        for(int i=0;i<3;i++){
            if(cpf== conta[i].cpf){
                cout<<"Seu saldo era de: "<<conta[i].saldo<<endl;
                conta[i].saldo= conta[i].saldo - saque;
                v=true;
                cout<<"Nome: "<< conta[i].nome<<endl;
                cout<<"CPF: "<< conta[i].cpf<<endl;
                cout<<"O saldo foi atualizado para "<< conta[i].saldo<<endl;
            }          
            if(!v){
                cout<<"Não encontrado";
            }
        }
    }
    
    else if(opc==2){
        cout<<"Digite o valor a ser depositado: ";
        cin>>deposito;
        cout<<endl;
        for(int i=0;i<3;i++){
            if(cpf== conta[i].cpf){
                cout<<"Seu saldo era de: "<<conta[i].saldo<<endl;
                conta[i].saldo= conta[i].saldo + deposito;
                v=false;
                cout<<"Nome: "<< conta[i].nome<<endl;
                cout<<"CPF: "<< conta[i].cpf<<endl;
                cout<<"O saldo foi atualizado para "<< conta[i].saldo<<endl;
                cout<< endl;
            }
            if(!v){
                cout<<"Não encontrado";
            }
        }
    }
    

}

