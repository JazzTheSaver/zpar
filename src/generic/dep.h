// Copyright (C) University of Oxford 2010
#ifdef LABELED
#include "dependency/label/generic.h"
#endif
namespace generic {
#include "dependency/rules/generic.h"
}

#ifdef LABELED
inline istream & operator >> (istream &is, generic::CDependencyLabel &label) {
   string s;
   is >> s;
   label.load(s);
   return is;
}

inline ostream & operator << (ostream &os, const generic::CDependencyLabel &label) {
   os << label.str() ;
   return os;
}

#endif
