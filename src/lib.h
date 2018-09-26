/*! \file lib.h
*\brief
*\author Bougouma Sarah
*\
*/

#pragma once

/*!
*\ class calcul
*\permet d'effectuer des calcul
*/
class calcul
{
public :
/*!
*\brief Cette classe permet d'effectuer des calcule (sommes, addition, mutliplication)
*\chaque methode prend deux parametre qui represente les deux nombres a multiplier ou
*\additionné ou divisé (nombre_1, nombre1 et nb1 presente le premiere nombre
*\nombre_2,nombre2, nb1);
*\return la sommes ou la multiplication ou la division de deux nombre
*/
int somme (int nombre_1 ,int nombre_2);
int multiplication(int nombre1, int nombre2);
int division(int nb1, int nb2);
};
