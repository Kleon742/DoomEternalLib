struct idDroppableLootDef
{
    enum itemType_t : int
    {
        NONE = 0,
        AMMO = 1,
        HEALTH = 2,
        ARMOR = 3,
        ENERGY = 4
    };

    enum itemAmountCalculation_t : int
    {
        ITEM_AMT_CALC_EXPLICIT = 0,
        ITEM_AMT_CALC_PERCENTAGE = 1,
        ITEM_AMT_CALC_NEEDED = 2
    };

    // Player must be above this percentage value.
    float value_MinConditional; // Offset: 0x0

    // Player must be below this percentage value.
    float value_MaxConditional; // Offset: 0x4

    // What type of item is this.
    idDroppableLootDef::itemType_t itemType; // Offset: 0x8

    // entity def to drop for this droppable loot.
    idDeclEntityDef* entityDef; // Offset: 0x10

    // How do we calculate the amount.
    idDroppableLootDef::itemAmountCalculation_t item_amt_calc; // Offset: 0x18

    // max amount dropped
    int item_maxDrop; // Offset: 0x1C

    // 0 - 100, Interpolate from this value based on deficiency.
    int item_dropChanceMin; // Offset: 0x20

    // 0 - 100, Interpolate to this value based on deficiency.
    int item_dropChanceMax; // Offset: 0x24

    // How long until this item disappears.
    idTypesafeTime < int , millisecondUnique_t , 1000 > item_removalTimeMS; // Offset: 0x28

    // item data for the loot type.
    idDeclProp_Component* decl; // Offset: 0x30

    // Percentage of Max Holdings. ( used with ITEM_AMT_CALC_PERCENTAGE )
    float item_percentage; // Offset: 0x38

}; // Size: 0x40
