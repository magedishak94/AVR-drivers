#include "StdTypes.h"
#include "DIO_MemMap.h"
#include "DIO_Interface.h"
#include "Utils.h"
#include "ADC_MEMMAP.h"
#include "ADC.h"


extern void ADC_vidInitReg(void){
 switch(REFRENCE_VOLT)
 {
 case AREF:CLR_BIT(ADMUX,REFS0);
		   CLR_BIT(ADMUX,REFS1);
		   break;
 case AVCC:SET_BIT(ADMUX,REFS0);
           CLR_BIT(ADMUX,REFS1);
           break;
 case INTERNAL_VREF: SET_BIT(ADMUX,REFS0);
                     SET_BIT(ADMUX,REFS1);
                     break;
 }
 SET_BIT(ADCSRA,ADEN);
 if(AUTO_TRIGGER)
	 SET_BIT(ADCSRA,ADATE);
 else
	 CLR_BIT(ADCSRA,ADATE);
 if(ADC_INTERRUPT)
	 SET_BIT(ADCSRA,ADIE);
 else
	 CLR_BIT(ADCSRA,ADIE);
 switch(PRESCALER_DIVISION)
 {
 case 2:CLR_BIT(ADCSRA,ADPS0);
        CLR_BIT(ADCSRA,ADPS1);
        CLR_BIT(ADCSRA,ADPS2);
        break;
 case 4: CLR_BIT(ADCSRA,ADPS0);
         SET_BIT(ADCSRA,ADPS1);
         CLR_BIT(ADCSRA,ADPS2);
         break;
 case 8: SET_BIT(ADCSRA,ADPS0);
         SET_BIT(ADCSRA,ADPS1);
         CLR_BIT(ADCSRA,ADPS2);
         break;
 case 16:CLR_BIT(ADCSRA,ADPS0);
         CLR_BIT(ADCSRA,ADPS1);
         SET_BIT(ADCSRA,ADPS2);
         break;
 case 32: SET_BIT(ADCSRA,ADPS0);
          CLR_BIT(ADCSRA,ADPS1);
          SET_BIT(ADCSRA,ADPS2);
          break;
 case 64: CLR_BIT(ADCSRA,ADPS0);
          SET_BIT(ADCSRA,ADPS1);
          SET_BIT(ADCSRA,ADPS2);
          break;
 case 128: SET_BIT(ADCSRA,ADPS0);
          SET_BIT(ADCSRA,ADPS1);
          SET_BIT(ADCSRA,ADPS2);
          break;
 }
}
void ADC_vidStartConversion(u8 channel)
{
	DIO_vidSetPinDirection(PORTA,channel,INFREE);
	ADMUX &= (0b11110000);
	ADMUX|=channel;
	SET_BIT(ADCSRA,ADSC);
}
u16 ADC_u16GetDValue(void)
{
	while(GET_BIT(ADCSRA,ADSC));
	return (ADCL|(ADCH<<8));
}
