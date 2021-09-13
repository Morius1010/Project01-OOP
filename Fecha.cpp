/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.cpp
 * Author: johnm
 *
 * Created on 4 de abril de 2021, 10:49
 */

#include <cstdlib>
#include "Fecha.h"
#include <iostream>
/**
 * @brief Constructor parametrizado
 * @param dia Dia de la fecha
 * @param mes Mes de la fecha
 * @param anio Anio de la fecha
 * @post Crea un objeto de clase Fecha
 */
Fecha::Fecha(int dia, int mes, int anio):_dia(dia),_mes(mes),_anio(anio){
}
/**
 * @brief Constructor de copia
 * @param orig
 * @post Crea un objeto de clase fecha por copia
 */
Fecha::Fecha(const Fecha& orig): _dia( orig._dia ), _mes( orig._mes ), _anio( orig._anio ){
}

/**
 * @brief Destructor de clase
 * @post Destruye el objeto
 */

Fecha::~Fecha(){
}
/**
 * 
 * @brief Devuelve el dia de la Fecha 
 */
int Fecha::GetDia() const{
    return _dia;
}
/**
 * 
 * @brief Devuelve el mes de la fecha 
 */
int Fecha::GetMes() const{
    return _mes;
}
/**
 * 
 * @brief Devuelve el anio de la fecha 
 */
int Fecha::GetAnio() const{
    return _anio;
}

/**
 * @brief Modifica el dia de la Fecha asignandole un nuevo valor
 * @param dia
 * @post Modifica el dia de la Fecha asignandole un nuevo valor 
 */

void Fecha::SetDia(int dia){
    this -> _dia = dia;
}

/**
 * @brief Modifica el mes de la Fecha asignandole un nuevo valor
 * @param mes
 * @post Modifica el mes de la Fecha asignandole un nuevo valor
 */

void Fecha::SetMes(int mes){
    this -> _mes = mes;
}

/**
 * @brief Modifica el anio de la Fecha asignandole un nuevo valor
 * @param anio
 * @post Modifica el anio de la Fecha asignandole un nuevo valor
 */

void Fecha::SetAnio(int anio){
    this -> _anio = anio;
}

bool Fecha::operator== ( const Fecha& otra )
{  return _dia == otra._dia;
}

bool Fecha::operator <(const Fecha& otra)
{ return _mes < otra._mes;
}

bool Fecha::operator !=(const Fecha& otra)
{ return _anio != otra._anio;
}

bool Fecha::operator <=(const Fecha& otra){
    return _mes<=otra._mes;
}

bool Fecha::operator >(const Fecha& otra){
    return _dia>otra._dia;
}

bool Fecha::operator >=(const Fecha& otra){
    return _mes >= otra._mes;
}

Fecha& Fecha::operator =(const Fecha& orig){
    if ( this != &orig ){
    _dia = orig._dia;
    _mes = orig._mes;
    _anio = orig._anio;
    }
    return *this;
}
