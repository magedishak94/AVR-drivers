#include "StdTypes.h"
#include "Utils.h"
#include "WDT_priv.h"
#include "WDT_int.h"

extern void WDT_set(u8 time)
{
	SET_BIT(WDTCR,WDE);
	WDTCR|=time;
}
extern void WDT_off(void)
{
	SET_BIT(WDTCR,WDE);
	SET_BIT(WDTCR,WDTOE);
	WDTCR=0x00;
}
