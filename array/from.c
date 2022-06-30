
#include <stdlib.h>
#include "../index.h"

Array array_from (
   void* literal,
   int   length,
   int   capacity
) // -
   {  Array thearray = malloc (sizeof (array_struct));
      thearray->at = literal;
      thearray->length = length;
      thearray->capacity = capacity;
      return thearray;
   }
