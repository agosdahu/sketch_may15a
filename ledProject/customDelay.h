#ifndef CUSTOMDELAY_H
#define CUSTOMDELAY_H

#include "stub_driver.h"

typedef unsigned long ulong_t;

void DelayMillis(int millisec);
int  GetDiffTime (void);
ulong_t GetSysTimeMsec ();
void SetTimer(int time);
int CheckIfTimerWentOff(void);

#endif // CUSTOMDELAY_H