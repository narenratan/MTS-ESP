#include "libMTSMaster.h"

int main()
{
    if (MTS_CanRegisterMaster())
    {
        MTS_RegisterMaster();
        MTS_SetNoteTuning(441.0, 69);
    }
    MTS_DeregisterMaster();
    return 0;
}
