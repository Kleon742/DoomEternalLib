struct damageGroupGoreLevelInfo_t
{
    // __edit float healthRatio; health ratio below which this gore level applies  __edit float totalHealthRatio; health ratio OF OWNING ENTITY below which this gore level applies the level of gore
    goreLevel_t goreLevel; // Offset: 0x0

    // whether reaching this gore level should trigger an injury state update
    bool causesInjury; // Offset: 0x4

    // whether reaching this gore level should trigger pain, even if there is no injury state change
    bool triggerNonInjuryPain; // Offset: 0x5

    // whether reaching this gore level should kill the character if no injured state can handle it
    bool causesDeath; // Offset: 0x6

}; // Size: 0x8
