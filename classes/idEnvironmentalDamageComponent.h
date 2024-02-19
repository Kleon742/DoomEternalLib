struct idEnvironmentalDamageComponent
{
    idStaticList < idStaticList < environmentalHazardFeedback_t , ( 4 ) > , 7 , false , TAG_IDLIST > envFeedBackLists; // Offset: 0x0

    float enviromentalDamageMitigator; // Offset: 0xFA0

    float barrelExplosivesMitigator; // Offset: 0xFA4

    float selfExplosivesMitigator; // Offset: 0xFA8

    bool voPlayedList[7]; // Offset: 0xFAC

    // keep track of whether we had environmental damage last frame
    bool lastEnviromentalDamage; // Offset: 0xFB3

    // keep track of whether we have environmental damage mitigation abilities
    bool hasEnvDamageMitigator; // Offset: 0xFB4

    bool startedSuitChargeSound; // Offset: 0xFB5

}; // Size: 0xFB8
