#include "libMTSClient.h"

int main()
{
    MTSClient *client = MTS_RegisterClient();
    double freq = MTS_NoteToFrequency(client, 69, 0);
    MTS_DeregisterClient(client);
    return 0;
}
