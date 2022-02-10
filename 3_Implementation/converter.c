
#include "converter.h"

struct parameters Buck_converter (float vin, float vo)
{
  float io, f, dvo;

  struct parameters bc;
  printf("Enter output current Value , frequency and ripple voltage(delta vo)");
  scanf ("%f", &io);
  scanf ("%f", &f);
  scanf ("%f", &dvo);

    bc.D =vo/vin;
    bc.R= vo/io;
    bc.Il = vo/bc.R;
    bc.Ilmin= 0.25*(bc.Il);

bc.L=(vo*(1-(bc.D))*(bc.R))/( (  vo-((bc.R)*(bc.Ilmin))  )*2*f );
    bc.Ilmax= bc.Il + (vo*(1-bc.D)/(bc.L * f* 2));
    bc.C=(1-bc.D)/(8*bc.L*(dvo/vo)*f*f);
   display (vin, vo, bc);
return bc;
 }

 struct parameters Boost_converter(float vin, float vo )
{
    float io, f, dvo;
  struct parameters bs;
  printf("Enter output current Value , frequency and ripple voltage(delta vo)");
  scanf ("%f", &io);
  scanf ("%f", &f);
  scanf ("%f", &dvo);

      bs.D= 1-(vin/vo);
    bs.R=vo/io;
    bs.Il=vo*io/vin;
 bs.L=bs.R*(bs.D)*(1-(bs.D))*(1-(bs.D))/(2*f);
    bs.Ilmin= (vin /((bs.R)*(1-(bs.D))*(1-(bs.D)))) - ( (vin* (bs.D))/(2*(bs.L) * f) );
    bs.Ilmax= (vin /((bs.R)*(1-(bs.D))*(1-(bs.D)))) + ( (vin* (bs.D))/(2*(bs.L) * f) );
    bs.C= (bs.D)/ ((bs.R)*f* (dvo/vo));
  display (vin, vo, bs);
return bs;

 }
struct parameters BuckBoost_converter(float vin, float vo )
{
   struct parameters bb;
    float io,f,dvo;
    printf("Enter output current Value , frequency and ripple voltage(delta vo)");
    scanf("%f", &io);
    scanf("%f", &f);
    scanf("%f", &dvo);
    bb.D= vo/(vo+vin);
    bb.R=vo/io;
    bb.Il =vin* (bb.D)/((bb.R)*(1-(bb.D))*(1-(bb.D)));
    bb.L= ((bb.R)*(1-(bb.D))*(1-(bb.D))) /(2*f);
    bb.Ilmin = ((vin*(bb.D) )/((bb.R)*(1-(bb.D))*(1-(bb.D)))) - ( (vin* (bb.D))/(2*(bb.L) * f) );
   bb.Ilmax = ((vin*(bb.D) )/((bb.R)*(1-(bb.D))*(1-(bb.D)))) + ( (vin* (bb.D))/(2*(bb.L) * f) );
    bb.C= (bb.D)/ ((bb.R)* f * (dvo/vo));
  display (vin, vo, bb);
return bb;
};

void display (float vin, float vo, struct parameters p)
{

    printf("Input voltage Vin= %f\n output Voltage Vo= %f\n", vin, vo);
    printf("duty ratio D= %f\n",p.D);
    printf("Inductor Current Il= %f\n",p.Il);
     printf("Minimum Inductor Current Il min= %f\n",p.Ilmin);
      printf("maximum Inductor Current Il max= %f\n",p.Ilmax);
     printf("Resistor value R= %f\n",p.R);
     printf("Inductor value L= %f\n",p.L);
     printf("capacitor value C= %f\n",p.C);
}

