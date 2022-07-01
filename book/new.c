
#include <stdlib.h>
#include "../index.h"

Book book_new (
   int id,
   ref title,
   ref author,
   val rating
) // -
   {  Book newbook = malloc (sizeof (book_struct));
      newbook->id = id;
      newbook->title = title;
      newbook->author = author;
      newbook->rating = rating;
      return newbook;
   }
