#include "LIB/STD_TYPES.h"

#include "MCAL/GPIO/GPIO_interface.h"
#include "MCAL/GPIO/GPIO_private.h"

#include "HAL/LCD/LCD_interface.h"
#include "HAL/KEYPAD/keypad_interface.h"

#include "EXTI.h"
#include "calculator.h"

u8 FLAG_KEYPAD_PRESSED=LOW;

extern s32 NUMBERS_NUMBER[10];

//Entry point
void main()
{

    LCD_voidInit();
    KEYPAD_voidInit();

    ISR_KEYPAD_PORTA_Init();

    char KeyPressed=0xff;
    while(1)
    {
        if(FLAG_KEYPAD_PRESSED)
        {

            KeyPressed = KEYPAD_u8PressedKey();
            if(0xFF != KeyPressed )
            {
                LCD_voidSendData(KeyPressed);
                CALCULATE(KeyPressed);
            }
            if('='== KeyPressed)
            {
                LCD_voidGoToXY(1,0);
                if(NUMBERS_NUMBER[0] >= 0)
                LCD_voidSendNumber(NUMBERS_NUMBER[0]);
                else
                {
                    NUMBERS_NUMBER[0] *= -1;
                    LCD_voidSendData('-');
                    LCD_voidSendNumber(NUMBERS_NUMBER[0]);

                }
            }
            FLAG_KEYPAD_PRESSED=LOW;
        }


    }
}
