struct idLogicNodeEntitySetDamage
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        INPUT_ENTITY = 2,
        INPUT_TIME = 3,
        OUTPUT_DONE = 4
    };

    idLogicEntityPtr entity; // Offset: 0x0

    idDeclDamage* declDamage; // Offset: 0x28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > amountOfTimeForResdualDamage; // Offset: 0x30

}; // Size: 0x38
