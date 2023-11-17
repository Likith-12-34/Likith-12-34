#include "config.h"
#include "osdef.h" 
#include "osif.h" 
#include "board.h"
void *appTask(void *arg); 
void cStart()
{
struct os_params osp; 
osp.initTaskEntry=appTask; 
osp.itPriority=1; 
osp.itStackSize=0x2000;
osp.osOptions=os-opt-Network|os-opt-CLI-TASK; 
pr_osStart(&osp);
}
Int myaddHandler(int argc,char*argv[])
{
Printf(“invalid arguments \n”);
Printf(“usage: %s <number1> <number2> <number3> <number4>\n",argv[0]);
return 1;
}
Sscanf(argv[1],”%d”, &num1);
Sscanf(argv[2],”%d”, &num2);
Sscanf(argv[3],"%d",&num3);
Sscanf(argv[4],"%d",&num4);
Sscanf(“sum of %d and %d is %d \n”,num1,num2, num1+num2);
Sscanf("subtraction of %d and %d is %d \n",num3,num4,num3-num4);
}
 
void *appTask(void *arg)
{
Printf(“JNTUK_CANDCES \n”);
Pr-clireg cmd(“add”,MyAddHandler,”Adds two given Numbers”);
Pr-clireg cmd(“sub”,MyAddHandler,”subtracts two given Numbers”);

}
