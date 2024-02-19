struct idStatBase
{
    struct statValue_t
    {
        int i; // Offset: 0x0

    }; // Size: 0x4

    idDeclMetric* decl; // Offset: 0x0

    idStatBase::statValue_t aggregatedValue; // Offset: 0x8

    // Making private so we can limit the places we have to make sure to update change time.
    idStatBase::statValue_t sessionValue; // Offset: 0xC

    idStatBase::statValue_t previousSessionValue; // Offset: 0x10

    idSmartTimer < GAMETIME_SERVER > serverTimer; // Offset: 0x18

    bool locked; // Offset: 0x20

}; // Size: 0x28
