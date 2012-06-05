/*
            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
*/
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Radio_Button.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Button.H>
#include <FL/Enumerations.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Secret_Input.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Box.H>
#include <boost/thread.hpp>

#include <string>
#include "drupalauth.hh"

using namespace std;

namespace scrum
{
  typedef const string propstr;
  
  propstr _win32 = "http://dynamic.scrumbleship.com/system/files/ScrumbleShip-0.14-win-full.zip";
  propstr _lin32 = "http://dynamic.scrumbleship.com/system/files/ScrumbleShip-0.14-lin32-full.zip";
  propstr _lin64 = "http://dynamic.scrumbleship.com/system/files/ScrumbleShip-0.14-lin64-full.zip";
  propstr _src = "http://dynamic.scrumbleship.com/system/files/ScrumbleShip-0.14-source.zip";
  enum versel
  {
    WIN32,
    LIN32,
    LIN64,
    OSX
    
  };

  
  class Fl_Light_Output : public Fl_Light_Button
  {
  public:
    Fl_Light_Output(int x, int y, int w, int h);
    void toggle();
    int handle(int event);  
   };
  
  class scrumwin : public Fl_Window
  {
  public:
    scrumwin(int w, int h);
    void setdrupalauth(drupalauth *d);
    void gatherdat();
    void go();
    versel getversel();
    string geturlstring();
    
  private:
    //~ gettin' down 'n' dirty!
    drupalauth* myd;
    Fl_Box* mainlbl;
    Fl_Button* login_but;
    Fl_Secret_Input* password;
    Fl_Input* username;
    Fl_Light_Output* login_stat;
    Fl_Box* status;
    
    // little menu for selection
    Fl_Group* versionselect;
    Fl_Radio_Button* rlin32;
    Fl_Radio_Button* rwin32;
    Fl_Radio_Button* rsrc;
    Fl_Radio_Button* rlin64;
    
    // call backs
    static void login_cb(Fl_Widget* w, void* v);
    inline void login_cb_i();
    
    // drupal stuff
    string _u, _p;
    versel vsl;
  };
}
