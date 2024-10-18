//
// Created by kali on 10/18/24.
//

#include <iostream>
#define MAX 5

using namespace std;

class CircularQueue {
      private:
        int *dkuyruk;
        int on,arka;

      public:
        CircularQueue(): dkuyruk(new int[MAX]), on(-1), arka(-1){};


        void add(int element)
        {
          if(on == 0 && arka == MAX -1 || on == arka + 1)
          {
            cout<<"Queue is full"<<endl;
            return;
            }else if(on == -1)
          {
              on = 0;
              arka = 0;
            }else

            {
              if(arka == MAX - 1)
              {
                arka = 0;
               else
                {
                 arka = arka + 1;
               }
            }
        }



};
