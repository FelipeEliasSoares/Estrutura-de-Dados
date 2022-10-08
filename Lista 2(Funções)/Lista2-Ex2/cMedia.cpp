/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cMedia.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 08:33
 */

#include "cMedia.h"
#include <iostream>

using namespace std;
cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia :: lerNotas(){
    float n1,n2,n3,mediaf;
    char opcao,select;
    
    while(opcao !='N'){
        cout << "Digite as suas notas"<<endl;
        cout << "Digite a nota 1: ";
        cin >>n1;
        cout << "Digite a nota 2: ";
        cin >>n2;
        cout << "Digite o nota 3: ";
        cin >>n3;
        
        cout << "Selecione a media 'A' para aritmetrica ou seleciona 'S' para ponderada: ";
        cin >> select;
        
        if(select == 'A'){
            mediaf= calc_mediaA(n1,n2,n3);
            cout<< "A media seleciona foi Aritmetrica "<< endl;
            cout<< "A media final foi: " << mediaf;
        }
        else if(select == 'P'){
            mediaf= calc_mediaP(n1,n2,n3);
            cout<< "A media seleciona foi Ponderada"<< endl;
            cout<< "A media final foi: " << mediaf << endl;
        }
        else{
            cout << "Media invalida";
        }
       
        cout << endl;
        cout << "Deseja fazer outra media \nS para sim\nN para não\nDigite:";
        cin >>opcao;
        cout << endl;
    }//while
}

float cMedia :: calc_mediaA(float n1, float n2,float n3){
    float media;
    media= ((n1 + n2 + n3)/3);
    
    return media;
}//calc_mediaA

float cMedia :: calc_mediaP(float n1,float n2,float n3){
    float media;
    media= ((n1*5)+(n2*3)+(n3*2))/10;
    return media;
}//calc_mediaB