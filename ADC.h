#ifndef ADC_H
#define ADC_H

#define REFRENCE_VOLT AVCC
#define AUTO_TRIGGER 0
#define ADC_INTERRUPT 0
#define PRESCALER_DIVISION 64  //at 8 MHZ ADC frequency is 125khz
#define AREF 0
#define INTERNAL_VREF 3
#define AVCC 1
extern void ADC_vidInitReg(void);  //enable adc interrupt adjust result

extern void ADC_vidStartConversion(u8 channel);

extern u16 ADC_u16GetDValue(void);

#endif
