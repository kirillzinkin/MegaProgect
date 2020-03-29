//
//  Kamaz.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Kamaz.hpp"

Kamaz::Kamaz() : Gruzovie()
{
  colihkoles = 8;
}

char * Kamaz::Golos()
{
  return new char [10] {"trktrktrk"};
}
