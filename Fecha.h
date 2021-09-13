/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.h
 * Author: johnm
 *
 * Created on 4 de abril de 2021, 10:48
 */

#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <string>

class Fecha{
private:
    int _dia;
    int _mes;
    int _anio;
public:
    Fecha( ) = default;
    Fecha ( int dia, int mes, int anio );
    Fecha ( const Fecha& orig );
    ~Fecha ( );
    int GetDia( ) const;
    void SetDia( int dia );
    int GetMes( ) const;
    void SetMes( int mes );
    int GetAnio( ) const;
    void SetAnio( int anio );
    bool operator== (const Fecha& otra);
    bool operator< (const Fecha& otra);
    bool operator<= (const Fecha& otra);
    bool operator>= (const Fecha& otra);
    bool operator> (const Fecha& otra);
    bool operator!= (const Fecha& otra);
    Fecha& operator= (const Fecha& otra);
};


#endif /* FECHA_H */
