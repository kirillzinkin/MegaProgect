//
//  Jiga.hpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#ifndef Jiga_hpp
#define Jiga_hpp

#include "Legkovie.hpp"

class Jiga : public Legkovie
{
public:
  Jiga();
  virtual char* Golos();
};

#endif /* Jiga_hpp */
