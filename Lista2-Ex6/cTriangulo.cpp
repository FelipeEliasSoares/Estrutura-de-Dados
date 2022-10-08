/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cTriangulo.cpp
 * Author: felipe
 * 
 * Created on 5 de setembro de 2022, 10:23
 */

#include "cTriangulo.h"
#include <iostream>


using namespace std;

cTriangulo::cTriangulo() {
}

cTriangulo::cTriangulo(const cTriangulo& orig) {
}

cTriangulo::~cTriangulo() {
}

void cTriangulo :: Trianguilo(){
    float a,b,c;
    int respostaf;
    
    cout<<"Digite o lado a: ";
    cin>>a;
    cout<<"Digite o lado b: ";
    cin>>b;
    cout<<"Digite o lado c: ";
    cin>>c;
    
    respostaf=Resposta(a,b,c);
    
    if(respostaf==1){
        cout<<"Os 3 lados formam um triangulo!\nEquilatero";
    }
    else if(respostaf==2){
        cout<<"Os 3 lados formam um triangulo!\nIsosceles";
    }
    else if(respostaf==3){
        cout<<"Os 3 lados formam um triangulo!\nEscaleno";
    }
    else{
        cout<<"Não formam triangulo";
    }
}

int cTriangulo:: Resposta(float a ,float b, float c){
    int r;


    if(a + b > c && a + c > b && b + c > a){
        if(a == b && a == c)
            r=1;
        else
            if(a == b || a == c || b == c)
                r=2;
            else
                r=3;
    }
    else
       r=5;
    
    return r;
}



