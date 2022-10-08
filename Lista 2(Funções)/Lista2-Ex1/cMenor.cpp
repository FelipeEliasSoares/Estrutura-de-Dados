/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMenor.cpp
 * Author: felipe
 * 
 * Created on 5 de setembro de 2022, 11:09
 */

#include "cMenor.h"
#include <iostream>

using namespace std;

cMenor::cMenor() {
}

cMenor::cMenor(const cMenor& orig) {
}

cMenor::~cMenor() {
}

void cMenor :: lerNumeros(){
    float n1,n2,reposta;
 
        
    
    cout<< "Digite o numero de n1: ";
    cin>>n1;
       
    cout<< "Digite o numero de n2: ";
    cin>>n2;
   
    
    reposta=Menor(n1,n2);
    
    cout<< "O menor foi o numero " << reposta;
}

float cMenor :: Menor(float n1,float n2){
    
    if(n1>n2){
        return n2;
    }
    else if(n2>n1){
        return n1;
    }
    
}


