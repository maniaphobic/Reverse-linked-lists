#include <iostream>
#include "cpp.hh"
using namespace std;

/*
 */

Chain::Chain() {
  head = NULL;
}

/*
 */

int Chain::add(int new_payload) {
  Link *cursor = head;
  Link *new_link = new Link;
  new_link->set_payload(new_payload);
  if (!head) {
    head = new_link;
  } else {
    while (cursor->get_next()) {
      cursor = cursor->get_next();
    }
    cursor->set_next(new_link);
  }
  return 1;
}

/*
 */

int Chain::display() {
  Link *cursor = head;
  while (cursor) {
    cursor->display();
    cout << ' ';
    cursor = cursor->get_next();
  }
  cout << "\n";
}

/*
 */

int Chain::reverse() {
  Link *cursor = head;
  Link *previous = NULL;
  while (cursor) {
    Link *next = cursor->get_next();
    cursor->set_next(previous);
    previous = cursor;
    cursor = next;
  }
  head = previous;
}

/*
 */

Link::Link() {
  next = NULL;
  payload = 0;
}

/*
 */

void Link::display() {
  cout << payload;
}

/*
 */

Link * Link::get_next() {
  return next;
}

/*
 */

int Link::set_next(Link *new_next) {
  next = new_next;
  return 1;
}

/*
 */

int Link::set_payload(int new_payload) {
  payload = new_payload;
  return payload;
}

/*
 */

int main() {
  Chain chain;
  int i = 1;
  chain.add(i++);
  chain.add(i++);
  chain.add(i++);
  chain.display();
  chain.reverse();
  chain.display();
  exit(0);
}
