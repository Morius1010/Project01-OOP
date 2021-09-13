/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   djutils.cpp
 * Author: johnm
 *
 * Created on 4 de abril de 2021, 11:31
 */

#include <cstdlib>
#include <iostream>
#include "djutils.h"

void djutils::mostrarTemazo(const Temazo& temazo, std::string prefijo){
    Fecha* auxiliar = temazo.GetFechaUltimoUso();
    std::cout << prefijo << "TEMAZO: " << std::endl
            << prefijo << "- Titulo: " << temazo.GetTitulo() << std::endl
            << prefijo << "- Interprete: " << temazo.GetInterprete() << std::endl
            << prefijo << "- Duracion en segundos:  " << temazo.GetSegundos() << std::endl
            << prefijo << "- Puntuacion: " << temazo.GetPuntuacion()
            << prefijo << "- Nombre Ultimo Garito: " << temazo.GetNombreUltimoGarito()
            << prefijo << "- Fecha Ultimo Uso: " << auxiliar->GetDia() << "/" << auxiliar->GetMes() << "/" << auxiliar->GetAnio();

}

void djutils::mostrarGarito(const Garito& garito, std::string prefijo){
    std::cout << prefijo << "GARITO: " << std::endl
            << prefijo << " - Nombre: " << garito.GetNombre() << std::endl
            << prefijo << " - Direccion: " << garito.GetDireccion();
            
}

void djutils::mostrarFecha(const Fecha& fecha, std::string prefijo){
    std::cout << prefijo << "FECHA: " << std::endl
            << prefijo << " - Dia: " << fecha.GetDia() << std::endl
            << prefijo << " - Mes: " << fecha.GetMes() << std::endl
            << prefijo << " - Anio: " << fecha.GetAnio();
}

void djutils::modificaGarito(Garito& garito){
    std::string nuevonombre, nuevadireccion;
    std::cout << "Introduzca un Nombre: ";
    getline(std::cin,nuevonombre);
    std::cout << "Introduzca una Direccion";
    getline(std::cin,nuevadireccion);
    garito.SetNombre(nuevonombre);
    garito.SetDireccion(nuevadireccion);

}

