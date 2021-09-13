/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Temazo.h
 * Author: johnm
 *
 * Created on 3 de abril de 2021, 10:26
 */

#ifndef TEMAZO_H
#define TEMAZO_H

#include <iostream>
#include <string>
#include "Fecha.h"

class Temazo{

private:
    std::string _Titulo;
    std::string _Interprete;
    int _segundos;
    int _puntuacion;
    std::string _nombreUltimoGarito;
    Fecha* _fechaUltimoUso;
public:
    Temazo();
    Temazo(std::string Titulo, std::string Interprete, int segundos, std::string nombreUltimoGarito, Fecha* fechaUltimoUso);
    Temazo(const Temazo& orig);
    ~Temazo();
    std::string GetTitulo() const;
    std::string GetInterprete() const;
    int GetSegundos() const;
    int GetPuntuacion() const;
    std::string GetNombreUltimoGarito() const;
    Fecha* GetFechaUltimoUso() const;
    void SetTitulo(std::string Titulo);
    void SetInterprete(std::string Interprete);
    void SetSegundos(int segundos);
    void SetNombreUltimoUso(std::string nombreUltimoUso);
    Temazo& SetFechaUltimoUso(Fecha* fechaUltimoUso);
};


#endif /* TEMAZO_H */


