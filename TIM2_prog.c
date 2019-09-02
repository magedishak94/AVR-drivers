#include "StdTypes.h"
#include "Utils.h"
#include "TIM2_priv.h"
#include "TIM2_cfg.h"
#include "TIM2_int.h"

void TIM2_vidInit(void)
{
	TCCR2|=TIMER_MODE;

#if(TIM2_OVF_INT==1)
	SET_BIT(TIMSK,TOIE2);
#endif
#if(TIM2_COMPMATCH_INT==1)
	SET_BIT(TIMSK,OCIE2);
#endif

	TCCR2|=COM_MODE;

	TCCR2 |=PRESCALER_SELECT;
}

void TIM2_vidSetTimerval(u8 u8CNT)
{
	TCNT2=u8CNT;
}

void TIM2_vidSetTimerCmpVal(u8 u8CNT)
{
	OCR2=u8CNT;
}

