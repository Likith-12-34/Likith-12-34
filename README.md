#include "config.h" #include "osdef.h" #include "osif.h" #include "board.h"
void *appTask(void *arg); void cStart()
{
struct os_params osp; osp.initTaskEntry=appTask; osp.itPriority=1; osp.itStackSize=0x2000;
osp.osOptions=os-opt-Network|os-opt-CLI-TASK; pr_osStart(&osp);
}
Int my add Handler(int argc,char*argv[])
{
Printf(“invalid arguments \n”);
Printf(“usage %s number1 number2 \n,argv[0]; Return 1;
}
Sscanf(argv[1],”%d”, &num1);
Sscanf(argv[2],”%d”, &num2);
Sscanf(“sum of %d”, is %d \n”,num1,num2, num1+num2);
}
 
void *appTask(void *arg)
{
Printf(“JNTUK_CANDCES \n”);
Pr-clireg cmd(“add”,My Add Handler,”Adds two given Numbers”);
}
