/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cSegundoGrau.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:32
 */

#include "cSegundoGrau.h"
#include <iostream>
#include <math.h>

using namespace std;

cSegundoGrau::cSegundoGrau() {
}

cSegundoGrau::cSegundoGrau(const cSegundoGrau& orig) {
}

cSegundoGrau::~cSegundoGrau() {
}

void cSegundoGrau :: lerNumeros(){
    int a,b,c;
    float deltaf;
    
    cout << "Digite os numeros A,B,C" << endl;
    cout << "Digite o numero A: ";
    cin>>a;
    cout << "Digite o numero B: ";
    cin>>b;
    cout << "Digite o numero C: ";
    cin>>c;
    
    deltaf=Delta(a,b,c);
    cout << deltaf;
}

float cSegundoGrau :: Delta(int a, int b, int c){
    float total;
    
    total=(pow(b,2)-(4*a*c));
    
    return total;
}

