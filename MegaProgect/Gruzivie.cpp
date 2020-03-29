//
//  Gruzivie.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Gruzivie.hpp"

Gruzovie::Gruzovie() : Transport()
{
  colihkoles = 0;
}

int Gruzovie::GetColihkoles()
{
  return colihkoles;
}

void Gruzovie::SetColihkoles(int c)
{
  colihkoles = c;
}

char * Gruzovie::Golos()
{
  return new char [13] {"prprprprprpr"};
}

double Gruzovie::Sheben()
{
  return 2.7;
}
