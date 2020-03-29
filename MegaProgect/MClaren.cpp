//
//  MClaren.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "MClaren.hpp"

MClaren::MClaren() : Legkovie()
{
    myzica = false;
}

char * MClaren::Golos()
{
  return new char [29] {"BBrrrTtttBrrraTTaata"};
}
