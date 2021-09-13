/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ParametroNoValido.h
 * Author: johnm
 *
 * Created on 4 de abril de 2021, 11:06
 */

#ifndef PARAMETRONOVALIDO_H
#define PARAMETRONOVALIDO_H

#include <iostream>
#include <string>

class ParametroNoValido{
private:
    std::string _Origen;
    std::string _Descripcion;
public:
    ParametroNoValido( );
    ParametroNoValido ( std::string Origen, std::string Descripcion );
    virtual ~ParametroNoValido ( );
    std::string GetOrigen ( ) const;
    std::string GetDescripcion ( ) const;
    void SetOrigen ( std::string Origen );
    void SetDescripcion ( std::string Descripcion );
    std::string queOcurre ( );    
};



#endif /* PARAMETRONOVALIDO_H */
