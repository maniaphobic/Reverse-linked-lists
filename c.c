#include <stdio.h>
#include <stdlib.h>
#include "c.h"

/*
 */

Chain *append(Chain *chain, int new_payload) {
  Link *link = new_link();
  link->payload = new_payload;
  if (chain->tail != (Link *) NULL) {
    chain->tail->next = link;
  }
  chain->tail = link;
  if (chain->head == (Link *) NULL) {
    chain->head = link;
  }
  return chain;
}

void display_chain(Chain *chain) {
  Link *cursor = chain->head;
  while (cursor) {
    printf("%d\n", cursor->payload);
    cursor = cursor->next;
  }
}

Chain *new_chain() {
  Chain *chain = (Chain *) malloc(sizeof(Chain));
  chain->head = (Link *) NULL;
  chain->tail = (Link *) NULL;
  return chain;
}

Link *new_link() {
  Link *link = (Link *) malloc(sizeof(Link));
  link->next = (Link *) NULL;
  link->payload = 0;
  return link;
}

Chain *reverse_chain(Chain *chain) {
  Link *cursor = chain->head;
  Link *previous = NULL;
  chain->tail = chain->head;
  while (cursor) {
    Link *placeholder = cursor->next;
    cursor->next = previous;
    previous = cursor;
    cursor = placeholder;
  }
  chain->head = previous;
}

int main(int argc, char **argv[]) {
  int limit = 5;
  if (argc > 1) {
    limit = atoi((char *)argv[1]);
  }
  
  Chain *chain = new_chain();
  for (int i=1; i <= limit; i++) {
    append(chain, i);
  }
  display_chain(chain);
  reverse_chain(chain);
  display_chain(chain);
  exit(0);
}
