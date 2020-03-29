//
//  Gruzivie.hpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#ifndef Gruzivie_hpp
#define Gruzivie_hpp

#include "Transport.hpp"

class Gruzovie : public Transport
{
protected:
  int colihkoles;
public:
  Gruzovie();
  int GetColihkoles();
  void SetColihkoles(int k);

  virtual char* Golos();
  double Sheben();
};

#endif /* Gruzivie_hpp */
