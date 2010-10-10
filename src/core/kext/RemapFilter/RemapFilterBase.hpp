#ifndef REMAPFILTERBASE_HPP
#define REMAPFILTERBASE_HPP

#include "Vector.hpp"

namespace org_pqrs_KeyRemap4MacBook {
  namespace RemapFilter {
    struct FilterValue {
      FilterValue(void) : value(0) {}
      FilterValue(unsigned int v) : value(v) {}

      unsigned int value;
    };
    DECLARE_VECTOR(FilterValue);

    struct ConfigPointer {
      ConfigPointer(void) : pointer(NULL) {}
      ConfigPointer(int* p) : pointer(p) {}

      int* pointer;
    };
    // XXX: For ConfigFilter. Remove me.
    DECLARE_VECTOR(ConfigPointer);
  }
}

#endif