
#include <stdio.h>
#include "../index.h"

void book_print (Book thebook)
   {  int id = thebook->id;
      ref title = thebook->title;
      ref author = thebook->author;
      val rating = thebook->rating;
      printf (
         "{ id: %i | title: %s | author: %s | rating: %lf }",
            id     , title     , author     , rating
      );
   }
