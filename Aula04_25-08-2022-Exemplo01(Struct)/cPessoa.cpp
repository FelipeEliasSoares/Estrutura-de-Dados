/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPessoa.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 10:34
 */
#include <iostream>
#include "cPessoa.h"


using namespace std;
cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa :: cadPessoa(){
    
    int n=5;
    int cpf;
    pessoa VetPessoas[n];
    
        
            for(int i=0; i<n ;i++){        
            //cout << "Digite nome " << endl;
            //cin>>VetPessoas[i].nome;
        
            //cout << "Digite o enderaço " << endl;
            //cin>>VetPessoas[i].end;
        
                
            cout << "Digite CPF " ;
             cin>>VetPessoas[i].cpf; 
        
            //cout << "Digite telefone" << endl;
            //cin>>VetPessoas[i].tell;
        }
    
     //this->Bolha(VetPessoas, n);
    this->Bolha2(VetPessoas, n);
     //this->imprimirDados(VetPessoas, n);
     
    cout<<"Digite o CPF para busca: ";
    cin>>cpf;
     
    if(this->PesquisaBinaria(VetPessoas, cpf, n)== -1){
     cout << "CPF não encontrado";
    }
    else{
     cout << "encontrado";
    }
    
}

void cPessoa :: imprimirDados(pessoa VetPessoas[], int n){
    
    for(int i=0;i<n;i++){
        cout << "nome: " <<VetPessoas[i].nome<<endl;
        cout << "Endereço: "<<VetPessoas[i].end<<endl;
        cout << "Telefone: "<<VetPessoas[i].tell<<endl;
        cout << "CPF: "<< VetPessoas[i].cpf<<endl;
        cout << "-------------------"<< endl;
    }//for
}

/*struct pessoa cPessoa :: buscarTelefone(){
        for(int i=0;i<=1;i++){
            if(this->VetPessoas[i].tell=123){
                return VetPessoas[i];
            }
        }
}
*/
void cPessoa::Bolha(pessoa VetPessoas[], int n){
    int i=0,j=0, z=0;
    pessoa temp;
        for (i= n-1; i >= 1; i--) {
            for (j= 0; j < i ;j++) {
                if (VetPessoas[j].nome > VetPessoas[j+1].nome) {
                    temp = VetPessoas[j];
                    VetPessoas[j] = VetPessoas[j+1];
                    VetPessoas[j+1] = temp;
                }   
            } 
            z++;
        }
    cout<<"Repeticões Bolha1: " << z << endl;
}
 


void cPessoa::Bolha2(pessoa VetPessoas[], int n){
  
        int i, j;
        pessoa temp;
        bool troca = true;
        for (i= n-1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j= 0; j < i ;j++)
            if (VetPessoas[j].nome < VetPessoas[j+1].nome) {
                temp = VetPessoas[j];
                VetPessoas[j] = VetPessoas[j+1];
                VetPessoas[j+1] = temp;
                troca = true;
                }
            }
}

int cPessoa :: PesquisaBinaria(pessoa VetPessoas[],int cpf ,int n){
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


