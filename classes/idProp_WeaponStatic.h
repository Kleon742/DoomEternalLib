struct idProp_WeaponStatic : idProp_Static
{
    // degrees we can rotate per frame
    float turnSpeed; // Offset: 0x1B68

    // max pitch rotation
    float maxPitch; // Offset: 0x1B6C

    // max yaw rotation
    float maxYaw; // Offset: 0x1B70

    // max yaw as far as the AI is concerned
    float maxAIYaw; // Offset: 0x1B74

    // max target range AI will consider using turret if less than weapon's range {{ units = m }}
    float maxRange; // Offset: 0x1B78

    // min target range AI will keep using turret {{ units = m }}
    float minRange; // Offset: 0x1B7C

    // max ratio of enemy to AI turret distance before AI will go to turret
    float travelSafetyMargin; // Offset: 0x1B80

    // ratio of max range and angle enemy must be within before AI will go to turret
    float rangeSafetyMargin; // Offset: 0x1B84

    // distance within which AI will check if another AI is heading towards turret
    float reserveRadiusFeet; // Offset: 0x1B88

    idManagedClassPtr < idActor > user; // Offset: 0x1B90

    idIndex < short , invalidJointIndex_t , - 1 > jointYaw; // Offset: 0x1BB0

    idIndex < short , invalidJointIndex_t , - 1 > jointPitch; // Offset: 0x1BB2

    idMat3 lookAt; // Offset: 0x1BB4

    idVec3 anglesOffset; // Offset: 0x1BD8

    idAnimator_JointMod* jointModAnimator; // Offset: 0x1BE8

    int turning; // Offset: 0x1BF0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > zoomTime; // Offset: 0x1BF8

    bool shooting; // Offset: 0x1C00

    bool enabled; // Offset: 0x1C01

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > coolDownTime; // Offset: 0x1C08

    // Time for the fire lead-in sound
    idTypesafeTime < int , millisecondUnique_t , 1000 > windupTime; // Offset: 0x1C10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > windupTimer; // Offset: 0x1C18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastThinkTime; // Offset: 0x1C20

    // sound to play when we are turning
    idSoundEvent* sndTurning; // Offset: 0x1C28

    // sound to play when we are firing
    idSoundEvent* sndFireLoop; // Offset: 0x1C30

    // sound to play when we stop firing
    idSoundEvent* sndFireStop; // Offset: 0x1C38

    // model used when we're blown up
    idRenderModel* deadModel; // Offset: 0x1C40

    // distance to move the clip model forward to help the AI reach the handles {{ units = m }}
    float clipForwardAmount; // Offset: 0x1C48

    // Piece to attach that gets blown off when damaged
    idList < const idDeclEntityDef * , TAG_IDLIST , false > attachmentDefs; // Offset: 0x1C50

    idAttachmentCollection attachments; // Offset: 0x1C68

    // weapon data fire what
    idWeapon weapon; // Offset: 0x1C88

    // over heating data when true, allow no firing until curHeat == 0
    bool overheating; // Offset: 0x5828

    // current heat value
    float curHeat; // Offset: 0x582C

    // player data heat at which overheating occurs
    int maxHeat; // Offset: 0x5830

    // the heat this gun must reach when it over heats
    int coolHeat; // Offset: 0x5834

    // Heat generated while firing (per second)
    int heatPerSecFiring; // Offset: 0x5838

    // Heat cooled off when not firing (per second)
    int heatCooledPerSec; // Offset: 0x583C

    // ai data Heat at which an overheat occurs
    int aiMaxHeat; // Offset: 0x5840

    // the heat the gun must reach when an AI over heats it
    int aiCoolHeat; // Offset: 0x5844

    // Heat generated while firing (per second)
    int aiHeatPerSecFiring; // Offset: 0x5848

    // Heat cooled off when not firing (per second)
    int aiHeatCooledPerSec; // Offset: 0x584C

    // visual & sound particle attached to the barrel while overheating
    idDeclParticle* overheatParticle; // Offset: 0x5850

    // sound to play when we overheat and have to cool down
    idSoundEvent* sndOverheat; // Offset: 0x5858

}; // Size: 0x5860
