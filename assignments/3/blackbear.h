#ifndef BLACKBEAR_H
#define BLACKHEAR_H

#include "animal.h"

using namespace std;

class blackbear : public animal {
  private:

  public:
    blackbear();
    blackbear(int);
    void bought();
    void birth();
    string namegen();
};

#endif
