/*Creating a mario pyramid in C, I can think of a few ways to do it,
but it's so fundamentally different with memory allocation, etc from what I'm used to,
it's an interesting puzzle.*/
#include <stdio.h>

int main(void) {
  /* user defines height of pyramid */
  printf("Enter a height for the Mario Pyramid!\n", );
  /*declare integer height from user*/
  int height = get_int();
  /*run makePyramid function with input height */
  return makePyramid(height)
  /* ^^ I don't know if returning a function is allowed or not! let's try it.*/
}
void makePyramid(height) {
  /* declare pyramid string empty (???)*/
  string pyramid = ""
  /* for size of user inputted height, increase char # */
  for (size_t height = 0; height < count; height++) {
      pyramid += "# #"
      /*I'm aware this won't create a pyramid.*/
      return pyramid
  }
  // then print out post loop pyramid
  printf("%s\n", pyramid);
}
