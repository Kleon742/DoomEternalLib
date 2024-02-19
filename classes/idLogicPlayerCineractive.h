struct idLogicPlayerCineractive
{
    enum logicIds_t : int
    {
        INPUT_CINERACTIVE = 0,
        OUTPUT_NONE = 1,
        OUTPUT_CINERACTIVE_COMPLETE = 2
    };

    logicNodeReference_t node; // Offset: 0x0

    idSyncEntity* cineractiveEntity; // Offset: 0x8

    idDeclEntityDef* cineractiveDef; // Offset: 0x10

}; // Size: 0x18
