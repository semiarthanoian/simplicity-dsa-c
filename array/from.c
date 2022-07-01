
#include <stdlib.h>
#include "../index.h"

Array array_from (
   void* literal,
   int   length,
   int   capacity
) // -
   {  Array newarray = malloc (sizeof (array_struct));
      newarray->at = literal;
      newarray->length = length;
      newarray->capacity = capacity;
      return newarray;
   }
