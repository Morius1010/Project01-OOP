/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Garito.h
 * Author: johnm
 *
 * Created on 3 de abril de 2021, 11:12
 */

#ifndef GARITO_H
#define GARITO_H

#include <iostream>
#include <string>
#include "ParametroNoValido.h"
class Garito{
private:
    std::string _Nombre;
    std::string _Direccion;
public:
    Garito( )=default;
    Garito( std::string Nombre, std::string Direccion );
    Garito( const Garito& orig );
    ~Garito( );
    std::string GetNombre( ) const;
    std::string GetDireccion( ) const;
    void SetNombre( std::string Nombre );
    void SetDireccion( std::string Direccion );
};


#endif /* GARITO_H */
