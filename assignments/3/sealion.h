#ifndef SEALION_H
#define SEALION_H

#include "animal.h"

using namespace std;

class sealion : public animal {
  private:

  public:
    sealion();
    sealion(int);
    string namegen();
    void birth();
    void bought();
};

#endif
