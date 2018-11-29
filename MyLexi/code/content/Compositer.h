

#ifndef _COMPOSITOR_H_
#define

#include "Composition.h"

/* formatting algorithms, I use this class to do typography

   define a seperate class hiearchy for objects that encapsulate
   formatting algorithms

   The root of the hiearchy will define an interface that supports a
   wide range of formatting algorithms, and each subclass will
   implement the interface to carry out a particular algorithm.
   
   2018-11-29
   Jz Wang
 */
class Compositor {
 public:
    /* when to format */
    virtual void Compose();

    /* What glyphs to format */
    void SetComposition(Composition *);
};

#en`dif /* _COMPOSITOR_H_ */
