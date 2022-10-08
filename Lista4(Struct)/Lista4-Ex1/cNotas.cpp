/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cNotas.cpp
 * Author: felipe
 * 
 * Created on 12 de setembro de 2022, 07:55
 */

#include "cNotas.h"
#include <iostream>

using namespace std;

cNotas::cNotas() {
}

cNotas::cNotas(const cNotas& orig) {
}

cNotas::~cNotas() {
}


void cNotas :: cadAluno(){
    int n;
    
    cout<<"Digite a quantidade de alunos: ";
    cin>>n;
    
    Aluno vetAluno[n];
    
    for(int i=0 ;i<n ;i++){
        
        cout<<"Digite o seu nome: ";
        cin>>vetAluno[i].nome;
        
        cout<<"Digite a sua matricula: ";
        cin>>vetAluno[i].matricula;
        
        cout<<"Digite a notas1: ";
        cin>>vetAluno[i].nota1;
        
        cout<<"Digite a nota2: ";
        cin>>vetAluno[i].nota2; 
        cout <<endl;
    }
    
    this->ImprimirDados(vetAluno,n);
    
}


void cNotas :: ImprimirDados(Aluno VetAluno[], int n){
    for(int i=0; i<n ; i++){
        cout <<"Nome: " <<VetAluno[i].nome <<endl;
        cout <<"Matricula: " <<VetAluno[i].matricula<<endl;
        VetAluno[i].media= (VetAluno[i].nota1 +VetAluno[i].nota2)/2;
        cout <<"Media: " <<VetAluno[i].media <<endl;
        cout <<endl;
    }
}
