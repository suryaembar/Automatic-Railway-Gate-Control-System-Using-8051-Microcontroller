#include<REG51xD2.H>
void delay();
sbit IR1=P2^0;
sbit IR2=P2^1;
void main()
{
    unsigned char i;
   IR1=1;
   IR2=1;
   while(1)
      {
           if (IR1==0)
           {
               for(i=0;i<10;i++)
                    {
                     P0=0x0C;
                       delay();
                       P0=0x06;
                 delay();
                 P0=0x03;
                  delay();
                 P0=0x09;
                  delay();
}
while(IR2==1);  //Wait till train starts to pass second sensor
while(IR2==0);  //Wait till last compartment passes second sensor
for(i=0;i<10;i++)
{
  P0=0x03;
   delay();
   P0=0x06;
   delay();
   P0=0x0C;
   delay();
   P0=0x09;
   delay();
}
}
if(IR2==0)
{
               for(i=0;i<10;i++)
               {
                  P0=0x0C;
                 delay();
                 P0=0x06;
                 delay();
                 P0=0x03;
                  delay();
                 P0=0x09;
                  delay();
}
while(IR1==1);  //Wait till train starts to pass second sensor
while(IR1==0);  //Wait till last compartment passes second sensor
for(i=0;i<10;i++)
{
  P0=0x03;
   delay();
   P0=0x06;
   delay();
   P0=0x0C;
   delay();
   P0=0x09;
   delay();
}
}
}
}
 void delay ()
{
   unsigned char i,j,k;
   for(i=0;i<6;i++)
   {
         for(j=0;j<127;j++)
             {
               For(k=0;k<127;k++)
}
}
}
