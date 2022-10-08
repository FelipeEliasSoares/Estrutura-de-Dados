/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIMC.cpp
 * Author: felipe
 * 
 * Created on 12 de setembro de 2022, 08:58
 */

#include "cIMC.h"
#include <iostream>
#include <math.h>
#include <complex>

using namespace std;

cIMC::cIMC() {
}

cIMC::cIMC(const cIMC& orig) {
}

cIMC::~cIMC() {
}

void cIMC :: cadastro(){
    int n;
    int cpf;
    char continuar;
    
    cout<<"Digite a quantidade de pessoas: ";
    cin>>n;
    
    pessoa VetPessoas[n]; 
    
    for(int i=0;i<n;i++){
        cout<<"Digite o Nome: ";
        cin>>VetPessoas[i].nome;
        
        cout<<"Digite o altura: ";
        cin>>VetPessoas[i].altura;
        
        cout<<"Digite o seu peso: ";
        cin>>VetPessoas[i].peso;
        
        cout<<"Digite o seu CPF: ";
        cin>>VetPessoas[i].cpf;
        cout<<endl;
        
        cout<<"M- masculino e F-Ferminino" <<endl;
        cout<<"Informe o Seu Sexo: ";
        cin>>VetPessoas[i].sexo;
        cout<<endl;
    }
    
    
    this->Bolha(VetPessoas, n);
    
    while(continuar != 'N'){
        cout<<"Digite o CPF para busca: ";
        cin>>cpf;    
        this->PesquisaSequencial(VetPessoas,cpf,n);
        cout<<endl;
        cout<<endl;
        cout<<"S para continuar e N para sair"<<endl;
        cout<<"Deseja realizar outra pesquisa ? "<<endl;
        cin>>continuar;
        cout<<endl;
    }
    //if(this->PesquisaBinaria(VetPessoas, cpf, n)== -1){
    //cout << "CPF não encontrado";
    //}
    //else{
     //cout << "O IMC desse CPF é " << this->imc(VetPessoas,n);
    //}
    

    
}

void cIMC :: Bolha(pessoa VetPessoas[], int n){
        int i, j;
        pessoa temp;
        bool troca = true;
        for (i= n-1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j= 0; j < i ;j++)
            if (VetPessoas[j].cpf > VetPessoas[j+1].cpf) {
                temp = VetPessoas[j];
                VetPessoas[j] = VetPessoas[j+1];
                VetPessoas[j+1] = temp;
                troca = true;
                }
            }   
}




int cIMC :: PesquisaBinaria(pessoa VetPessoas[],int cpf ,int n){
    int inf,sup,meio;
    inf=0;
    sup= n-1;
    while(inf <=sup){
        meio=(inf+sup)/2;
        if(cpf == VetPessoas[meio].cpf){
            return meio;
        }
        else if(cpf < VetPessoas[meio].cpf){
            sup=meio-1;
        }
        else{
            inf=meio-1;
        }
    }
    return -1; /* não encontrado */
        
}




float cIMC :: imc(pessoa x){
    float imc=0.0;
 
    imc= x.peso/ pow(x.altura,2);
    
    
    return imc;
}


void cIMC :: PesquisaSequencial(pessoa VetPessoas[], int cpf, int n){
    
    bool achou =false;
    for(int i=0;i<n;i++){
        if(cpf== VetPessoas[i].cpf){
            cout<<"CPF encontrado" << " ,o  IMC desse CPF é " << this->imc(VetPessoas[i]);
            achou=true;
        }    
        if(!achou)
            cout<<"Pessoa não encontrada";
    }
   
}