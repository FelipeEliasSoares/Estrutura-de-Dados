/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cVefica.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:21
 */

#include "cVefica.h"
#include <iostream>

using namespace std;
cVefica::cVefica() {
}

cVefica::cVefica(const cVefica& orig) {
}

cVefica::~cVefica() {
}

void cVefica :: lerNumeros(){
    int numero,resultadof;
    
    cout << "Digite o numero para verificação: " ;
    cin>>numero;
    
    resultadof=resultado(numero);
    
    cout << "O resultado do numero foi: "<< resultadof;
}

int cVefica :: resultado(int numero){
    int valor;
    
    if(numero>0){
        valor= 1;
    }
    else if(numero<0){
        valor= -1;
    }
    else{
        valor=0;
    }
    
    return valor;
}
