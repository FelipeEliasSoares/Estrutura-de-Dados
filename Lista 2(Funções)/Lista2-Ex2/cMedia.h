/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cMedia.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 08:33
 */

#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
    
    void lerNotas();
    float calc_mediaA(float n1 ,float n2,float n3);
    float calc_mediaP(float n1 ,float n2,float n3);
    
private:

};

#endif /* CMEDIA_H */

