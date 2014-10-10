# C Type Sizes

I'm occasionally wondering what the sizes of C types are on my machine. This
[program](./main.c) prints out the sizes of primitive types and `stdint.h`
types.

I've written this program before, and I didn't want to write it again. Consider
this my final word on the matter.

But it's not the final word on the subject. Ultimately, I'd like to have this be
a very portable (but still simple) program that runs on any machine and prints
out all the useful types for that architecture and compiler.

Possible improvements:

* Add more useful types
* Display compiler and architecture information
* Support compilers other than `cc`
* Support Microsoft Windows/Visual Studio (which I don't have)
* Make `stdint.h` use optional for systems without it

Pull requests welcome!
