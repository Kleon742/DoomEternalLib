struct idBot : idClass
{
    struct entityIgnoreInfo_t
    {
        idSpawnId entitySpawnID; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > ignoreTime; // Offset: 0x8

        botIgnoreEntityReason_t reason; // Offset: 0x10

    }; // Size: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > botCreationTimeGT; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > botStartThinkingTime; // Offset: 0x18

    // the major bot component systems.
    idFSMUser lowLevelFSMUser; // Offset: 0x20

    idFSMUser highLevelFSMUser; // Offset: 0x13A0

    idBotAimState* aimState; // Offset: 0x2720

    idBotWorldState* worldState; // Offset: 0x2728

    idBotMoveState* moveState; // Offset: 0x2730

    idBotWeaponState* weaponState; // Offset: 0x2738

    idBotMemory* memory; // Offset: 0x2740

    idBotGoalState* goalState; // Offset: 0x2748

    idBotControllerInterface* controllerInterface; // Offset: 0x2750

    idBotEntityInterface* entityInterface; // Offset: 0x2758

    idBotTrajectoryManager* trajectoryManager; // Offset: 0x2760

    idBotComponentInterface componentInterface; // Offset: 0x2768

    // various bot properties
    char* debugName; // Offset: 0x2770

    idDeclBot* botDef; // Offset: 0x2778

    idList < idBot::entityIgnoreInfo_t , TAG_BOT , false > ignoreEntityList; // Offset: 0x2780

    idAnimatedEntity* owner; // Offset: 0x2798

    idEntity* controllerEntity; // Offset: 0x27A0

    idAI2* ai; // Offset: 0x27A8

    idSpawnId aiSpawnID; // Offset: 0x27B0

}; // Size: 0x27B8
