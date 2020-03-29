//
//  Legkovie.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Legkovie.hpp"

Legkovie::Legkovie() : Transport()
{
    myzica = false;
}

bool Legkovie::GetMyzica()
{
  return myzica;
}

void Legkovie::SetMyzica(int m)
{
  myzica = m;
}

char * Legkovie::Golos()
{
  return new char [16] {"vrmvrmvrmtrtrtr"};
}

int Legkovie::AntiClrilo()
{
  return 400;
}
