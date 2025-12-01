#include "ddc_simulink_CRD_fixed_capi_host.h"
static ddc_simulink_CRD_fixed_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        ddc_simulink_CRD_fixed_host_InitializeDataMapInfo(&(root), "ddc_simulink_CRD_fixed");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
