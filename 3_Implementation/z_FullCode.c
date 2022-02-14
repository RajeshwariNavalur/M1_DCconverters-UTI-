#include<stdio.h>
struct parameters Buck_converter (float vin, float vo);
struct parameters Boost_converter (float vin, float vo);
struct parameters BuckBoost_converter (float vin, float vo);
void display (float vin, float vo, struct parameters bc);
struct parameters
{
  float R;			// Resistor value
  float L;			// Inductor Value
  float C;			//capacitor value
  float Il;			//Inductor current
  float Ilmax;			//maximum Inductor current
  float Ilmin;			//minimum Inductor current
  float D;			//duty ratio
};

int main ()
{
  struct parameters bb, bc, bs, p;
  float vo, vin;
  int o;
  printf ("Enter Input voltage Value");
  scanf ("%f", &vin);
  printf ("Enter output voltage Value");
  scanf ("%f", &vo);

  if (vin > vo)
    {
      printf("select the converter: 1-buck converter and 2-buck-boost converter\n");
      scanf ("%d", &o);
      switch (o)
	{
	case 1: Buck_converter (vin, vo);
	  break;

	case 2: BuckBoost_converter (vin, vo);
	  break;
	default:
	  printf ("invalid choice");
	}
}
	    else
    {
        printf("select the converter: 1-boost converter and 2-buck-boost converter");
        scanf("%d",&o);
        switch(o)
        {
            case 1: Boost_converter(vin,vo);
            break;

            case 2: BuckBoost_converter(vin,vo);
            break;
            default: printf("invalid choice");
        }
    }
      return 0;


}


struct parameters Buck_converter (float vin, float vo)
{
  float io, f, dvo;

  struct parameters bc;
  printf("Enter output current Value: ");
  
  scanf ("%f", &io);
  printf("Enter Frequency Value:");
  scanf ("%f", &f);
  printf("Enter Voltage ripple Value(delta vo):");
  scanf ("%f", &dvo);

    bc.D =vo/vin;
    bc.R= vo/io;
    bc.Il = vo/bc.R;
    bc.Ilmin= 0.25*(bc.Il);
    bc.L=(vo*(1-(bc.D))*(bc.R))/( (  vo-((bc.R)*(bc.Ilmin))  )*2*f );
    bc.Ilmax= bc.Il + (vo*(1-bc.D)/(bc.L * f* 2));
    bc.C=(1-bc.D)/(8*bc.L*(dvo/vo)*f*f);
   printf("\nBUCK CONVERTER\n");
   display (vin, vo, bc);
return bc;
 }

 struct parameters Boost_converter(float vin, float vo )
{
    float io, f, dvo;
  struct parameters bs;
  printf("Enter output current Value: ");
  scanf ("%f", &io);
  printf("Enter Frequency Value:");
  scanf ("%f", &f);
  printf("Enter Voltage ripple Value(delta vo):");
  scanf ("%f", &dvo);

      bs.D= 1-(vin/vo);
    bs.R=vo/io;
    bs.Il=vo*io/vin;
    bs.L=bs.R*(bs.D)*(1-(bs.D))*(1-(bs.D))/(2*f);
    bs.Ilmin= (vin /((bs.R)*(1-(bs.D))*(1-(bs.D)))) - ( (vin* (bs.D))/(2*(bs.L) * f) );
    bs.Ilmax= (vin /((bs.R)*(1-(bs.D))*(1-(bs.D)))) + ( (vin* (bs.D))/(2*(bs.L) * f) );
    bs.C= (bs.D)/ ((bs.R)*f* (dvo/vo));
  printf("\nBOOST CONVERTER\n");
  display (vin, vo, bs);
return bs;

 }
struct parameters BuckBoost_converter(float vin, float vo )
{
   struct parameters bb;
    float io,f,dvo;
    printf("Enter output current Value:");  
      scanf ("%f", &io);
  printf("\nEnter Frequency Value:");
  scanf ("%f", &f);
  printf("\nEnter Voltage ripple Value(delta vo):");
  scanf ("%f", &dvo);
    bb.D= vo/(vo+vin);
    bb.R=vo/io;
    bb.Il =vin* (bb.D)/((bb.R)*(1-(bb.D))*(1-(bb.D)));
    bb.L= ((bb.R)*(1-(bb.D))*(1-(bb.D))) /(2*f);
    bb.Ilmin = ((vin*(bb.D) )/((bb.R)*(1-(bb.D))*(1-(bb.D)))) - ( (vin* (bb.D))/(2*(bb.L) * f) );
   bb.Ilmax = ((vin*(bb.D) )/((bb.R)*(1-(bb.D))*(1-(bb.D)))) + ( (vin* (bb.D))/(2*(bb.L) * f) );
    bb.C= (bb.D)/ ((bb.R)*f* (dvo/vo));
  printf("\nBUCK-BOOST CONVERTER\n");
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



