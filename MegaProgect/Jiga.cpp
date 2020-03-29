//
//  Jiga.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Jiga.hpp"

Jiga::Jiga() : Legkovie()
{
    myzica = true;
}

char * Jiga::Golos()
{
  return new char [29] {"VtRvLIkbhfkFCDJkkugygTfuj!!!"};
}
