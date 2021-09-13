/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Garito.cpp
 * Author: johnm
 *
 * Created on 3 de abril de 2021, 11:18
 */
#include <stdexcept>
#include <cstdlib>
#include "Garito.h"
#include <string>
#include "ParametroNoValido.h"
/**
 * @brief Constructor Parametrizado
 * @param Nombre nombre del garito
 * @param Direccion direccion del garito
 * @post Crea un objeto de tipo Garito con un Nombre y una Direccion
 */
Garito::Garito(std::string Nombre, std::string Direccion):_Nombre(Nombre),_Direccion(Direccion){
    
}
/**
 * @brief Constructor de copia
 * @param orig Objeto de tipo Garito que copia los datos de otro objeto de tipo Garito
 * @post Crea un nuevo objeto por copia
 */

Garito::Garito(const Garito& orig):
_Nombre(orig._Nombre),
_Direccion(orig._Direccion){
    
}
/**
 * @brief Destructor de clase de Garito
 * @post Destruye un objeto de tipo Garito
 */
Garito::~Garito(){
    
}
/**
 * 
 * @brief Devuelve el nombre del Garito 
 */

std::string Garito::GetNombre() const{
    return _Nombre;
}

/**
 * @brief Modifica el Nombre del Garito
 * @param Nombre Nuevo nombre del Garito
 * @post Modifica el Nombre del Garito
 */

ParametroNoValido ExcepcionNombre("Garito::SetNombre","El nombre no puede estar vacio");


void Garito::SetNombre(std::string Nombre){
    std::string cadena =  ExcepcionNombre.queOcurre();
    try{    
        if (Nombre == ""){
            throw cadena;
        }else{
            this->_Nombre = Nombre;
        }
    }catch(std::string cadena){
        std::cerr <<"ERROR: " << cadena;
    }
}

/**
 * 
 * @brief Devuelve la direccion del Garito 
 */

std::string Garito::GetDireccion() const{
    return _Direccion;
}

/**
 * @brief Modifica la direccion del Garito
 * @param Direccion Nueva direccion del Garito
 * @post Modifica la direccion del Garito
 */

ParametroNoValido ExcepcionDireccion("Garito::SetDireccion","La direccion no puede estar vacia");

void Garito::SetDireccion(std::string Direccion){
    std::string cadena = ExcepcionDireccion.queOcurre();
    try{
        if(Direccion == ""){
            throw cadena;
        }else{
            this->_Direccion = Direccion;
        }
    }catch(std::string cadena){
        std::cerr << "ERROR: " << cadena;
    }
    
}

    