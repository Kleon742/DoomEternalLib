struct damageScaleTable_t
{
    // damage decl associated with this table
    idDeclDamage* declDamage; // Offset: 0x0

    // table to scale damage over time
    idDeclTable* declTable; // Offset: 0x8

    // damage table scale will only be reset after player leaves volume for this amount of time
    idTypesafeTime < int , millisecondUnique_t , 1000 > resetTableOnExitTimeMS; // Offset: 0x10

    // time player entered volume
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x18

    // time player exited volume
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > exitTime; // Offset: 0x20

    // when player exits volume, saves time player entered volume
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeOnExit; // Offset: 0x28

}; // Size: 0x30
