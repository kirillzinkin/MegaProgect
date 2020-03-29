//
//  Transport.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include "Transport.hpp"

Transport::Transport()
{
    rashod = 0;
    moshnost = 0;
}

int Transport::GetRashod()
{
    return rashod;
}

int Transport::GetMoshnost()
{
    return moshnost;
}

void Transport::SetRashod(int r)
{
    if(r >= 5 && r <= 50)
        rashod = r;
}

void Transport::SetMoshnost(int m)
{
    if(m >= 70 && m <= 1050)
        moshnost = m;
}

char * Transport::Vihlop()
{
  return new char[1] {""};
}


