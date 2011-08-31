#include <iostream>
#include <stdlib.h>
using namespace std;

//
//
//

class Chain {
  Chain *next;
  int payload;
public:
  Chain(void);
  int add(Chain *);
  void display(void);
  int reverse(void);
  int set_payload(int);
};

Chain::Chain(void) {
  next = (Chain *) NULL;
  cursor = (Chain *) NULL;
  payload = 0;
}

int Chain::add(int new_payload) {
  link_p = (Chain *) malloc(sizeof(Chain));
  link_p->set_payload(new_payload);
  if (next == (Chain *) NULL) {
    next = cursor = link;
  } else {
    
  }
}

void Chain::display(void) {
  1;
}

int Chain::reverse(void) {
  1;
}

int Chain::set_payload(int new_payload) {
  return (payload = new_payload);
}

//
//
//

int main() {
  Chain chain;
  chain.add(1);
  return(1);
}
