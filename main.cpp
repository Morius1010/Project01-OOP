/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnm
 *
 * Created on 3 de abril de 2021, 10:26
 */
#include <iostream>
#include <cstdlib>
#include <string>

#include "Fecha.h"
#include "Garito.h"
#include "ParametroNoValido.h"
#include "Temazo.h"
#include "djutils.h"

int main(int argc, char** argv) {
    Temazo skere;
    Fecha* FechaTemazo;
    FechaTemazo = new Fecha (14,06,1993);
    Temazo temazo("Beat It", "Michael Jackson", 180,"El Garito",FechaTemazo);
    Garito montaditos("100 Montaditos", "Calle Isabel la Catolica"), copiamontaditos(montaditos);
    Fecha revolucion(06,07,1985), revolucionparametrizada(17,06,1932);
    
   // djutils::mostrarTemazo(skere,";");
    djutils::mostrarTemazo(temazo,";");
    
    djutils::mostrarGarito(montaditos,";");
    djutils::mostrarGarito(copiamontaditos,";");
    
    djutils::mostrarFecha(revolucion,";");
    djutils::mostrarFecha(revolucionparametrizada,";");
   
   // std::string hola ="hola", quetal="quetal";
    
  // montaditos.SetNombre("");
  // copiamontaditos.SetDireccion("");
  
  djutils::modificaGarito(montaditos);
 //  ParametroNoValido ExcepcionCualquiera("hola","quetal");
   //std::cout << ExcepcionCualquiera.queOcurre();
  
  delete FechaTemazo;
  FechaTemazo = nullptr;
    return 0;
}

