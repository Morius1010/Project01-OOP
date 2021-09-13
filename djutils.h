/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   djutils.h
 * Author: johnm
 *
 * Created on 4 de abril de 2021, 11:31
 */

#ifndef DJUTILS_H
#define DJUTILS_H

#include <iostream>
#include <string>
#include "Garito.h"
#include "Fecha.h"
#include "Temazo.h"

namespace djutils{
    void mostrarTemazo ( const Temazo& temazo, std::string prefijo );
    void mostrarGarito ( const Garito& garito, std::string prefijo );
    void mostrarFecha ( const Fecha& fecha, std::string prefijo );
    void modificaGarito ( Garito& garito );
}


#endif /* DJUTILS_H */
