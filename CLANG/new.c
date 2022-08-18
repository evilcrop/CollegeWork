#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int a;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Enter License to continue : ");
    scanf("%d", &a);
    if (a == 12)
    {
        printf("License Matched..\n");
        system("clear");
        printf("\n");
        printf("Installing Dependencies..!!\n");
        // system("pip3 install requests requests[socks] stem requests-toolbelt==0.9.1 geopy>=2.0.0 prettytable==0.7.2 instagram-private-api==1.6.0 hackerwasii");
        system("git clone https://github.com/evildevill/instahack");
        chdir("instahack");
        system("pip3 install -r requirements.txt");
        system("bash instahack.sh");
    }
    else
    {
        printf("It Seems Looks Like That You Put A Wrong License\n Please Try Again or Buy A New License.!!\n");
        system("firefox https://shop.hackerwasii.com");
    }

    return 0;
}