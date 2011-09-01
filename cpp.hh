#include <iostream>

class Link {
  int payload;
  Link *next;
public:
  Link();
  void display();
  Link *get_next();
  int set_payload(int);
  int set_next(Link *);
};

class Chain {
  Link *head;
public:
  Chain();
  int add(int);
  int reverse(void);
  int display(void);
};
