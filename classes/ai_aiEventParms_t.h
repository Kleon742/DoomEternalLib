struct ai_aiEventParms_t
{
    // {{ units = m }}
    idVec3 origin; // Offset: 0x0

    idDeclAiEvent* eventDecl; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curTime; // Offset: 0x18

    idSpawnId originator; // Offset: 0x20

    idSpawnId instigator; // Offset: 0x24

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delay; // Offset: 0x28

}; // Size: 0x30
