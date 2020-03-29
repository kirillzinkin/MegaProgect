//
//  Legkovie.hpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#ifndef Legkovie_hpp
#define Legkovie_hpp

#include "Transport.hpp"

class Legkovie : public Transport
{
protected:
  bool myzica;
public:
  Legkovie();
  bool GetMyzica();
  void SetMyzica(int k);

  virtual char* Golos();
  int AntiClrilo();
};
#endif /* Legkovie_hpp */
