struct mapEntityClipInfo_t
{
    idVec3 origin; // Offset: 0x0

    idVec3 scale; // Offset: 0xC

    idMat3 axis; // Offset: 0x18

    idStr renderModelName; // Offset: 0x40

    idStr clipModelType; // Offset: 0x70

    idStr clipModelName; // Offset: 0xA0

    idStr overrideClipMaterial; // Offset: 0xD0

    bool playerClip; // Offset: 0x100

    bool monsterClip; // Offset: 0x101

    bool moveableClip; // Offset: 0x102

    bool shotClip; // Offset: 0x103

    bool ikClip; // Offset: 0x104

    bool opaqueClip; // Offset: 0x105

    bool allTeamsShotClip; // Offset: 0x106

    bool hasPlayerClip; // Offset: 0x0

    bool hasMonsterClip; // Offset: 0x0

    bool hasMoveableClip; // Offset: 0x0

    bool hasShotClip; // Offset: 0x0

    bool hasIKClip; // Offset: 0x0

    bool hasOpaqueClip; // Offset: 0x0

    bool hasAllTeamsShotClip; // Offset: 0x0

    bool hasScale; // Offset: 0x0

}; // Size: 0x108
