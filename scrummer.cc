/*
Copyright (c) 2012 Alex Herrmann alexhairyman@gmail.com

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#include "scrummer.hh"

using namespace std;

#define out(a) std::cout << #a << ": " << a << std::endl;

// Everything scrummer
// classes,etc

int main(int argc, char* argv[])
{

//  scrum::scrumwin *s = new scrum::scrumwin();
//  scrum::drupalauth *d = new scrum::drupalauth();
//  s->setdrupalauth(d);
//  s->go();
//  Fl::run();
//  ScrumbleUnzip *su = new ScrumbleUnzip;
  
  scrum::scrummyconfigure * sc = new scrum::scrummyconfigure();
  sc->populateconf();
//  su->unzip(d->getstringoffile(d->getversel()));
//  delete(d);
//  delete(s);
//  delete(su);
  out("SDF");
  return 0;

}
