// Programming 2D Games
// Copyright (c) 2011 by: 
// Charles Kelly
// Spacewar constants.h v1.0

#ifndef _CONSTANTS_H            // Prevent multiple definitions if this 
#define _CONSTANTS_H            // file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

//-----------------------------------------------
// Useful macros
//-----------------------------------------------
// Safely delete pointer referenced item
#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }
// Safely release pointer referenced item
#define SAFE_RELEASE(ptr)      { if(ptr) { (ptr)->Release(); (ptr)=NULL; } }
// Safely delete pointer referenced array
#define SAFE_DELETE_ARRAY(ptr) { if(ptr) { delete [](ptr); (ptr)=NULL; } }
// Safely call onLostDevice
#define SAFE_ON_LOST_DEVICE(ptr)    { if(ptr) { ptr->onLostDevice(); } }
// Safely call onResetDevice
#define SAFE_ON_RESET_DEVICE(ptr)   { if(ptr) { ptr->onResetDevice(); } }
#define TRANSCOLOR  SETCOLOR_ARGB(0,255,0,255)  // transparent color (magenta)

//-----------------------------------------------
//                  Constants
//-----------------------------------------------

//audio stuff
const char WAVE_BANK[] = "audio\\win\\Wave Bank.xwb";
const char SOUND_BANK[] = "audio\\win\\Sound Bank.xsb";
//sound cues
const char GUN_SHOT[] = "gun_sound_effect";
const char TARGET_SHATTER[] = "Light Bulb Breaking-SoundBible.com-53066515";
const char MUSIC[] = "04 All of Us";

// window
const char CLASS_NAME[] = "Unnatural Selection";
const char GAME_TITLE[] = "Unnatural Selection";
const bool FULLSCREEN = false;              // windowed or fullscreen
const UINT GAME_WIDTH =  1000;              // width of game in pixels
const UINT GAME_HEIGHT = 600;               // height of game in pixels
 
// game
const double PI = 3.14159265;
const double PI2 = 1.57079632;
const float FRAME_RATE = 60.0f;                // the target frame rate (frames/sec)
const float MIN_FRAME_RATE = 10.0f;             // the minimum frame rate
const float MIN_FRAME_TIME = 1.0f/FRAME_RATE;   // minimum desired time for 1 frame
const float MAX_FRAME_TIME = 1.0f/MIN_FRAME_RATE; // maximum time used in calculations
const float FULL_HEALTH = 100;

// graphic images
const char NEBULA_IMAGE[] =   "pictures\\box(64x64).png";     // photo source NASA/courtesy of nasaimages.org 
const char TARGET_IMAGE[] =	"pictures\\breakable-target.png";
const char TEXTURES_IMAGE[] = "pictures\\textures.png";  // game textures
const char MENU_IMAGE[] =     "pictures\\splash.png";      // menu texture

//Background
const char SPLASH_IMAGE[] = "pictures\\splash.jpg";

// key mappings
// In this game simple constants are used for key mappings. If variables were used
// it would be possible to save and restore key mappings from a data file.
const UCHAR CONSOLE_KEY  = VK_OEM_3;    // `~ key for U.S.
const UCHAR ESC_KEY      = VK_ESCAPE;   // escape key
const UCHAR ALT_KEY      = VK_MENU;     // Alt key
const UCHAR ENTER_KEY    = VK_RETURN;   // Enter key
const UCHAR SHIP1_LEFT_KEY    = 'A';
const UCHAR SHIP1_RIGHT_KEY   = 'D';
const UCHAR SHIP1_FORWARD_KEY = 'W';
const UCHAR SHIP1_FIRE_KEY    = 'S';
const UCHAR SHIP2_LEFT_KEY    = VK_LEFT; // left arrow
const UCHAR SHIP2_RIGHT_KEY   = VK_RIGHT; // right arrow
const UCHAR SHIP2_FORWARD_KEY = VK_UP;   // up arrow
const UCHAR SHIP2_FIRE_KEY    = VK_DOWN; // down arrow

// weapon types
enum WEAPON {TORPEDO, SHIP, STAR};

#endif