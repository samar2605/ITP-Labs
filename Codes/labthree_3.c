#include<stdio.h>
#include<stdlib.h>
int main()
{
    enum month {JAN=1,FEB,MARCH,APRIL,MAY,JUNE,JULY,AUG,SEPT,OCT,NOV,DEC};
	enum day{SAT,SUN,MON,TUE,WED,THUR,FRI};
    unsigned int d,y,m,total_days,w,year_count,month_count,day_count,extra_days;
    unsigned int mday[12]={31,28,31,30,31,30,31,31,30,31,30,31},Total_mdays;
    printf("Enter date:");
    scanf("%d",&d);
	printf("Enter month:");
	scanf("%d",&m);
	printf("Enter year:");
	scanf("%d",&y);

	switch(m)
    {
    case JAN:
			 if(d>0&&d<32)
			 break;
			 else
			 printf("Invalid date\n");
		   abort();
	case FEB:
			 if(d>0&&d<29)
			 break;
			 else
			 printf("Invalid date\n");
		    abort();
	case MARCH:
			 if(d>0&&d<32)
			 break;
			 else
			 printf("Invalid date\n");
		   abort();
    case APRIL:
			 if(d>0&&d<31)
			 break;
			 else
			 printf("Invalid date\n");
			 abort();
    case MAY:
			 if(d>0&&d<32)
			 break;
			 else
			 printf("Invalid date\n");
	       	 abort();
    case JUNE:
			 if(d>0&&d<31)
			 break;
			 else
			 printf("Invalid date\n");
			 abort();
	case JULY:
             if(d>0&&d<32)
			 break;
			 else
			 printf("Invalid date\n");
	       	 abort();
	case AUG:
			 if(d>0&&d<32)
			 break;
			 else
			 printf("Invalid date\n");
		     abort();
	case SEPT:
			 if(d>0&&d<31)
			 break;
			 else
			 printf("Invalid date\n");
		     abort();
    case OCT:
			 if(d>0&&d<32)
			 break;
			 else
			 printf("Invalid date\n");
		     abort();
	 case NOV:
			 if(d>0&&d<31)
			 break;
			 else
			 printf("Invalid date\n");
		     abort();
	 case DEC:
			 if(d>0&&d<32)
			 break;
			 else
			 printf("Invalid date\n");
		     abort();

    default:
        printf("\n WRONG MONTH\n");
		    abort();
    }

	year_count=y-2000;
	month_count=m-1;
	day_count=d-1;
	if(year_count%4==0)
    extra_days=year_count/4;
    else
	extra_days=year_count/4+1;
	for(int i=0;i<month_count;i++)
    {
       Total_mdays=Total_mdays+mday[i];

    }
    if(m>2)
        Total_mdays=Total_mdays+1;
	total_days=(365*year_count)+Total_mdays+day_count+extra_days;
	w=total_days%7;
    printf("\ntotal %d\n",total_days);


	switch(w)
    {
    case MON:
        printf("Day of the week is Monday\n");
		break;
	case TUE:
        printf("Day of the week is Tuesday\n");
		break;
	case WED:
        printf("Day of the week is Wednesday\n");
		break;
    case THUR:
        printf("Day of the week is Thursday\n");
		break;
    case FRI:
        printf("Day of the week is Friday\n");
		break;
    case SAT:
        printf("Day of the week is Saturday\n");
        break;
	case SUN:
        printf("Day of the week is Sunday\n");
		break;
    default:
        printf("\n Bye");
    }
    return 0;
}
