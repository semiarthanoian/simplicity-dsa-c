
#include <stdlib.h>
#include "../index.h"

Array array_concat (
   Array first,
   Array second
) // -
   {  int copyid, newid; val element;
      // - copy the first array
      Array concat = array_slice (first, 0, first->length);
      // - total length
      concat->length += second->length;
      // - copy the second array
      copyid = -1; newid = (first->length - 1);
      loop: copyid += 1; newid += 1;
         element = ((val*) second->at)[copyid];
         ((val*) concat->at)[newid] = element;
      if (copyid < second->length) goto loop;
      return concat;
   }
