#ifndef COMMON_H
#define COMMON_H

enum displayMode_e { PLAYER, VOL, STATIONS, NUMBERS, LOST, UPDATING, INFO, SETTINGS, TIMEZONE, WIFI, CLEAR, SLEEPING, SDCHANGE, SCREENSAVER, SCREENBLANK };
enum pages_e      : uint8_t  { PG_PLAYER=0, PG_DIALOG=1, PG_PLAYLIST=2, PG_SCREENSAVER=3 };

enum displayRequestType_e { BOOTSTRING, NEWMODE, CLOCK, NEWTITLE, NEWSTATION, NEXTSTATION, DRAWPLAYLIST, DRAWVOL, DBITRATE, AUDIOINFO, SHOWVUMETER, DSPRSSI, SHOWWEATHER, NEWWEATHER, PSTOP, PSTART, DSP_START, WAITFORSD, SDFILEINDEX, NEWIP, NOPE };
struct requestParams_t
{
  displayRequestType_e type;
  int payload;
};

enum controlEvt_e { EVT_NONE=255, EVT_BTNLEFT=0, EVT_BTNCENTER=1, EVT_BTNRIGHT=2, EVT_ENCBTNB=3, EVT_BTNUP=4, EVT_BTNDOWN=5, EVT_ENC2BTNB=6, EVT_BTNMODE=7 };



#endif
