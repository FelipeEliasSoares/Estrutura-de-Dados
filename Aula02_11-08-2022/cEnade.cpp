/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cEnade.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 08:15
 */

#include "cEnade.h"
#include <iostream>


using namespace std;

cEnade::cEnade() {
}

cEnade::cEnade(const cEnade& orig) {
}

cEnade::~cEnade() {
}

int x;

void cEnade ::dadosMatriz(){
  //Declaração de variaveis locais
    int i = 0, j = 0, c = 0;
    
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            c++;
            this->M[i][j]=c;
        }
    }
    
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            c=this->M[2-i][3-j];
            this->M[i][j]=c;
        }
    }
}



void cEnade :: imprimeMatriz(){
    for (int i=0;i<=2;i++){
        cout << endl;
        for(int j=0;j<=3;j++){
            cout << " " << this->M[i][j];
        }
    }
   
}

