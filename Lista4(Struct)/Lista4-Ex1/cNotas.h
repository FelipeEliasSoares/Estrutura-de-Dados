/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cNotas.h
 * Author: felipe
 *
 * Created on 12 de setembro de 2022, 07:55
 */

#ifndef CNOTAS_H
#define CNOTAS_H

struct Aluno {
    char nome[40];
    int matricula;
    float nota1,nota2,media;
};



class cNotas {
public:
    cNotas();
    cNotas(const cNotas& orig);
    virtual ~cNotas();
    
    
    void cadAluno();
    float calculoMedia(Aluno VetAluno[],int n);
    void ImprimirDados(Aluno VetAluno[],int n);
private:

};

#endif /* CNOTAS_H */

