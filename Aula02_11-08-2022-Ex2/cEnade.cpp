/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cEnade.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 09:14
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


void cEnade ::vetorInsert(){
    int i;
    
    for(i=0;i<10;i++){
        this->vetB[i]=0;
        if((i % 2) == 0){
            this->vetA[i]= i;
        }
        else{
            this->vetA[i]= i* 2;
        }
    }
    
    for(i=0;i<10;i++){
        while(this->vetA[i]> i){
            this->vetB[i] = this->vetA[i];
            this->vetA[i] = this->vetA[i];
        }
    }
    
}

void cEnade ::vetorMonstrar(){
    for(int i=0;i<10;i++){
        cout << " " <<this->vetA[i];
        cout << " " <<this->vetB[i];
    }
}
