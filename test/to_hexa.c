#include "main.h"
/**
 * to_hexa - converts to hexadecimal
 * @decNum:input parameter
 * Return :integer
 */
int to_hexa( long int decNum)
{

long int decNum,rem,quo;
int i=1,j,temp;
char hexadecNum[100];
quo = decNum;
while(quo!=0)
{
temp = quo % 16;
if( temp < 10)
temp =temp + 48; else
temp = temp + 55;
hexadecNum[i++]= temp;
quo = quo / 16;
return (quo);
}
