
#include <stdlib.h>
#include "../index.h"

Array array_new (int capacity)
   {  Array thearray = malloc (sizeof (array_struct));
      thearray->at = malloc (capacity * 8);
      thearray->length = 0;
      thearray->capacity = capacity;
      return thearray;
   }
