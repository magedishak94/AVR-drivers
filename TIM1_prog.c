#include "StdTypes.h"
#include "Utils.h"
#include "TIM1_priv.h"
#include "TIM1_cfg.h"
#include "TIM1_int.h"

void TIM1_vidInit(void)
{
	TCCR1A|=(TIMER_MODE & 0x03);
	TCCR1B|=((TIMER_MODE & 0x0c)<<1);
	TCCR1A|=COM_MODE_A;
	TCCR1A|=COM_MODE_B;
#if(TIM1_OVF_INT==1)
	SET_BIT(TIMSK,TOIE1);
#endif
#if(TIM1_COMPMATCHA_INT==1)
	SET_BIT(TIMSK,OCIE1A);
#endif
#if(TIM1_COMPMATCHB_INT==1)
	SET_BIT(TIMSK,OCIE1B);
#endif
#if(TIM1_INPUT_CAP_INT==1)
	SET_BIT(TIMSK,TICIE1);
#endif


	TCCR1B |=PRESCALER_SELECT;
}

void TIM1_vidSetTimerval(u16 u16CNT)
{
	TCNT1=u16CNT;
}

void TIM1_vidSetTimerCmpVal_A(u16 u16CNT)
{
	OCR1A=u16CNT;
}
void TIM1_vidSetTimerCmpVal_B(u16 u16CNT)
{
	OCR1B=u16CNT;
}
void TIM1_vidsetICR1val(u16 u16CNT)
{
	ICR1=u16CNT;
}
