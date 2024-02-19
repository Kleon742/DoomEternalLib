struct customizeCharacterScreenData_t
{
    durationAndVisits_t podiumCustomizeScreen; // Offset: 0x0

    durationAndVisits_t idleAnimCustomizeScreen; // Offset: 0x8

    durationAndVisits_t victoryCustomizeScreen; // Offset: 0x10

    durationAndVisits_t introAnimCustomizeScreen; // Offset: 0x18

    durationAndVisits_t progressableSetCustomizeScreen; // Offset: 0x20

    durationAndVisits_t weaponSkinCustomizeScreen; // Offset: 0x28

    durationAndVisits_t characterSkinCustomizeScreen; // Offset: 0x30

    int totalCumDuration; // Offset: 0x38

    idStr character; // Offset: 0x40

}; // Size: 0x70
