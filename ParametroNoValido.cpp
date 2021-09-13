/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ParametroNoValido.cpp
 * Author: johnm
 *
 * Created on 4 de abril de 2021, 11:14
 */

#include <cstdlib>
#include "ParametroNoValido.h"
#include <iostream>
#include <string>

ParametroNoValido::ParametroNoValido():_Origen("vacio"),_Descripcion("vacio"){
}

/**
 * @brief Constructor Parametrizado
 * @param Origen
 * @param Descripcion
 * @post Crea un objeto de clase ParametroNoValido
 */
ParametroNoValido::ParametroNoValido( std::string Origen, std::string Descripcion ):_Origen(Origen),_Descripcion(Descripcion){
}
/**
 * @brief Destructor de clase
 * @post Destruye un objeto
 */
ParametroNoValido::~ParametroNoValido( ){
}


void ParametroNoValido::SetOrigen(std::string Origen){
    this->_Origen;
}

std::string ParametroNoValido::GetOrigen() const{
    return _Origen;
}

void ParametroNoValido::SetDescripcion(std::string Descripcion){
    this->_Descripcion;
}

std::string ParametroNoValido::GetDescripcion() const{
    return _Descripcion;
}

std::string ParametroNoValido::queOcurre(){
    return "["+_Origen+"]: "+_Descripcion;
}