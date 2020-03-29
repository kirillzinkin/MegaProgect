//
//  Kamaz.hpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#ifndef Kamaz_hpp
#define Kamaz_hpp

#include "Gruzivie.hpp"

class Kamaz : public Gruzovie
{
public:
  Kamaz();
  virtual char* Golos();
};

#endif /* Kamaz_hpp */
