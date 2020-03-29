//
//  main.cpp
//  MegaProgect
//
//  Created by Кирилл Зинкин on 26.03.2020.
//  Copyright © 2020 Кирилл Зинкин. All rights reserved.
//

#include <iostream>
#include"Transport.hpp"
#include"Gruzivie.hpp"
#include"Legkovie.hpp"
#include"Kamaz.hpp"
#include"Daf.hpp"
#include"Jiga.hpp"
#include"MClaren.hpp"

using namespace std;

int main()
{
    system("clear");
    Transport t1;
    t1.SetRashod(27);
    cout << "Расход t1 = " << t1.GetRashod() << endl;

    Gruzovie g1;
    g1.SetColihkoles(8);
    cout << "Грузовик g1 издает звук " << g1.Golos() << " и возит " << g1.Sheben() << " тонн щебня" << endl;
    
    Legkovie l1;
    l1.SetMyzica(true);
    cout << "Легковушка l1 издает звук " << l1.Golos() << " и длинна антикрыла " << l1.AntiClrilo() << " милиметров" << endl;
    
    Kamaz kamAZ_65115;
    kamAZ_65115.SetRashod(28);
    kamAZ_65115.SetMoshnost(300);
    cout << "kamAZ_65115 издает звук: " << kamAZ_65115.Golos() << endl;

    Daf DAF_XF_105;
    DAF_XF_105.SetRashod(47);
    DAF_XF_105.SetMoshnost(462);
    cout << "DAF_XF_105 издает звук: " << DAF_XF_105.Golos() << endl;
    
    Jiga Vaz2105;
    Vaz2105.SetRashod(12);
    Vaz2105.SetMoshnost(93);
    cout << "Vaz2105 издает звук: " << Vaz2105.Golos() << endl;
    
    MClaren McLaren_Automotive;
    McLaren_Automotive.SetRashod(62);
    McLaren_Automotive.SetMoshnost(659);
    cout << "McLaren_Automotive издает звук: " << McLaren_Automotive.Golos() << endl;



    int colvoMashin = 0;
    cout << "Введите колличество машин: " << endl;
    cin >> colvoMashin;

    Gruzovie** mashina = 0;
    mashina = new Gruzovie*[colvoMashin];
    Legkovie** mashinka = 0;
    mashinka = new Legkovie*[colvoMashin];
    for (int i = 0; i < colvoMashin; i++)
    {
      int a = 0;
      cout << "Какая машина?" << endl;
      cin >> a;
      if (a < 1 || a > 4)
          a = (int)rand()%4;
          
      switch (a) {
          case 1:
              mashina[i] = new Kamaz();
              break;
          case 2:
              mashina[i] = new Daf();
              break;
          case 3:
              mashinka[i] = new Jiga();
              break;
          case 4:
              mashinka[i] = new MClaren();
              break;
                
          default:
              break;
        }
      if(a == 1 || a == 2)
        cout << "Машина " << i << " издает звук " << mashina[i]->Golos() << endl;
      if(a == 3 || a== 4)
        cout << "Машина " << i << " издает звук " << mashinka[i]->Golos() << endl;
    }
}
