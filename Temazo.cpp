/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Temazo.cpp
 * Author: johnm
 *
 * Created on 3 de abril de 2021, 10:47
 */

#include <cstdlib>
#include <string>
#include "Temazo.h"

Temazo::Temazo(){
}
/**
 * @brief Constructor parametrizado
 * @param titulo Título del temazo
 * @param interprete Persona o grupo que lo interpreta
 * @param duracion Duración en segundos
 * @post Crea un objeto de tipo Temazo con puntuación 0
 */
Temazo::Temazo( std::string Titulo, std::string Interprete, int segundos, std::string nombreUltimoGarito, Fecha* fechaUltimoUso ):
_Titulo(Titulo),_Interprete(Interprete),_segundos(segundos),_puntuacion(0),_nombreUltimoGarito(nombreUltimoGarito),_fechaUltimoUso(fechaUltimoUso){

}
/**
 * @brief Constructor de copia
 * @param orig Objeto de tipo Temazo que copia sus datos
 * @post Crea un nuevo objeto por copia
 */
Temazo::Temazo( const Temazo& orig ):
_Titulo(orig._Titulo),
_Interprete(orig._Interprete),
_segundos(orig._segundos),
_puntuacion(orig._puntuacion),
_nombreUltimoGarito(orig._nombreUltimoGarito),
_fechaUltimoUso(nullptr){
}
/**
 * @brief Destructor de clase
 * @post Destruye el objeto
 */
Temazo::~Temazo ( ){

}
/**
 * 
 * @brief Devuelve el Titulo del temazo
 */

std::string Temazo::GetTitulo() const{
    return _Titulo;
}

/**
 * @brief Modifica el Titulo del Temazo
 * @param Titulo Nuevo Titulo del Temazo
 * @post Modifica el Titulo del Temazo
 */

void Temazo::SetTitulo(std::string Titulo){
    this->_Titulo = Titulo;
}

/**
 * 
 * @brief Devuelve el Interprete del Temazo 
 */

std::string Temazo::GetInterprete() const{
    return _Interprete;
}

/**
 * @brief Modifica el Interprete del Temazo
 * @param Interprete Nuevo Interprete del Temazo
 * @post Modifica el Interprete del Temazo
 */

void Temazo::SetInterprete(std::string Interprete){
    this->_Interprete = Interprete; 
}

/**
 * @brief Devuelve la duracion en segundos del Temazo 
 */

int Temazo::GetSegundos() const{
    return _segundos;
    
}
/**
 * @brief Modifica la duracion del Temazo
 * @param segundos Nueva duracion del Temazo en segundos
 * @post Modifica la duracion del Temazo
 */
void Temazo::SetSegundos(int segundos){
    this->_segundos = segundos;
    
}
/**
 * 
 * @brief Devuelve la puntuacion del Temazo 
 */
int Temazo::GetPuntuacion() const{
    return _puntuacion;

}

/**
 * @brief Modifica el nombre del Ultimo Garito
 * @param nombreUltimoUso
 * @post Modifica el nombre del Ultimo Garito
 */

void Temazo::SetNombreUltimoUso(std::string nombreUltimoUso){
    this->_nombreUltimoGarito;
}

/**
 * @brief Devuelve el Nombre del Ultimo Garito
 * @post Devuelve el Nombre del Ultimo Garito
 */

std::string Temazo::GetNombreUltimoGarito() const{
    return _nombreUltimoGarito;
}

Temazo& Temazo::SetFechaUltimoUso(Fecha* fechaUltimoUso){
    this->_fechaUltimoUso = fechaUltimoUso;
    return *this;
}

Fecha* Temazo::GetFechaUltimoUso() const{
    return _fechaUltimoUso;
}