#include "converter.h"
int main ()
{
  struct parameters bb, bc, bs, p;
  float vo, vin;
  int o,d;
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
          d= D_bc( vin, vo);
	  break;

	case 2: BuckBoost_converter (vin, vo);
  d= D_bb( vin, vo);
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
            d= D_bs( vin, vo);
            break;

            case 2: BuckBoost_converter(vin,vo);
            d= D_bb( vin, vo);;

            break;
            default: printf("invalid choice");
        }
    }

      return 0;


}


