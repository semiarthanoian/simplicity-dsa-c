
#include <stdlib.h>
#include "../index.h"

Array array_new (int capacity)
   {  Array newarray = malloc (sizeof (array_struct));
      newarray->at = malloc (capacity * 8);
      newarray->length = 0;
      newarray->capacity = capacity;
      return newarray;
   }
