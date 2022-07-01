
#include <stdio.h>
#include "index.h"

void print_header ();
void print_data (Array booktable);
void print_row (Book abook);

int main ()
   {  Book laotzu = book_new (0, "Tao Te Ching", "Lao Tzu", 9.0);
      Book lotus = book_new (1, "Lotus Sutra", "Buddha", 10.0);
      Book yoga = book_new (2, "Yoga Sutra", "Patanjali", 9.8);
      // - CREATE TABLE - - - - - - - - - - - - - - - - - - - -
      Book literal[10000] = { laotzu, lotus, yoga };
      Array booktable = array_from (literal, 3, 10000);
      // - GENERATE ID - - - - - - - - - - - - - - - - - - - -
      int lastindex = booktable->length - 1;
      Book selected = ((ref*) booktable->at)[lastindex];
      int newbookid = selected->id + 1;
      // - ÍNSERT INTO - - - - - - - - - - - - - - - - - - - -
      Book theprophet = book_new (newbookid, "The Prophet", "Kahlil Gibran", 9.0);
      int index = booktable->length;
      ((ref*) booktable->at)[index] = theprophet;
      booktable->length += 1;
      // - PRINT TABLE - - - - - - - - - - - - - - - - -
      print_header ();
      print_data (booktable);
      return 0;
   }

void print_header ()
   {  printf ("+------------+---------------------------+------------------+-------------+ \n");
      printf ("|  Id        |  Title                    |  Author          |  Rating     | \n");
      printf ("+------------+---------------------------+------------------+-------------+ \n");
   }

void print_data (Array booktable)
   {  int index; Book selected;
      if (booktable->length == 0) return;
      // - else print - - - - - - - - - - - - - - - - -
      index = -1;
      loop: index += 1;
         selected = ((ref*) booktable->at)[index];
         print_row (selected);
      if (index < booktable->length - 1) goto loop;
   }

void print_row (Book abook)
   {  printf (
         "|  %-9i |  %-24s |  %-15s |  %-10.1lf | \n",
         abook->id, abook->title, abook->author, abook->rating
      );
      printf ("+------------+---------------------------+------------------+-------------+ \n");
   }
