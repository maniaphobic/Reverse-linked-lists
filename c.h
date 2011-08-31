#ifndef C_HEADER
#define C_HEADER

/*
 */

typedef struct Link {
  struct Link *next;
  int payload;
} Link;

Link *new_link();

/*
 */

typedef struct Chain {
  Link *head;
  Link *tail;
} Chain;

Chain *new_chain();

#endif

