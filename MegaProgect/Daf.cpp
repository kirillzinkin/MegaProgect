//
//  Daf.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Daf.hpp"

#include "Kamaz.hpp"

Daf::Daf() : Gruzovie()
{
  colihkoles = 10;
}

char * Daf::Golos()
{
  return new char [13] {"vvvvyyyyymmm"};
}
