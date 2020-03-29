//
//  Transport.hpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#ifndef Transport_hpp
#define Transport_hpp

class Transport
{
protected:
  int rashod;
  int moshnost;
public:
  Transport();
  int GetRashod();
  int GetMoshnost();

  void SetRashod(int p);
  void SetMoshnost(int v);

  virtual char* Vihlop();
};
#endif /* Transport_hpp */
