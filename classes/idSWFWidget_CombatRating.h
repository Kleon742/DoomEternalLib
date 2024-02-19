struct idSWFWidget_CombatRating : idSWFWidget
{
    idArray < idSWFWidget * , 5 > points; // Offset: 0x180

    int previousCombatFrame; // Offset: 0x1A8

    int combatFrame; // Offset: 0x1AC

    int animatingPointIndex; // Offset: 0x1B0

}; // Size: 0x1B8
