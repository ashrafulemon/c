///function (header file math.h)

///sin ,cos ,tan,asin,acos,atan,sinh,cosh,tanh
///exp,log,log10,pow,sqrt,fmod
///fabs,labs,floor ceil

#include<stdio.h>
#include<math.h>
int main()
{
    printf("%lf\n",sin(0.0));  ///man redian a dite hobe .r long intejer a asbe
    printf("%lf\n",cos(0.0));
    printf("%lf\n",tan(0.0));

    printf("%lf\n",asin(1));  ///main redian a ase
    printf("%lf\n",acos(0));  ///cos invars a ar man
    printf("%lf\n",atan(1));

    printf("%lf\n",sinh(1));  ///haiparbolik
    printf("%lf\n",cosh(1));
    printf("%lf\n",tanh(1));

    printf("%lf\n",exp(1));   ///exposial ar man nirdes kore,e to the power

    printf("%lf\n",log(1));   ///log ar man nirdes kore,

    printf("%lf\n",log10(1));   ///same

    printf("%lf\n",pow(2,3));   ///2 to the power 3

    printf("%lf\n",sqrt(4));   ///borgomol ,ba rot ar kaj

    printf("%lf\n",fmod(11.2,10));   ///vagshes

    printf("%lf\n",fabs(-6.0));   ///porom man

    printf("%ld\n",labs(-9));   /// same

    printf("%lf\n",floor(4.9));   ///bojini

    printf("%lf\n",ceil(4.3));   ///bojini



    return 0;
}
