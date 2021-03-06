#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class card {
  private:
    int rank;  // Should be in the range 0-12.
    int suit;  // Should be in the range 0-3.
  public:
    // must have constructors, destructor, accessor methods, and mutator methods
    card();
    ~card();
    int get_rank();
    int get_suit();
    void set_rank(int);
    void set_suit(int);
    string name_suit();
    string name_rank();
};

#endif
