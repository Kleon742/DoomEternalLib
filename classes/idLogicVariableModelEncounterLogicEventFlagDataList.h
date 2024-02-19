struct idLogicVariableModelEncounterLogicEventFlagDataList : idLogicVariableModel
{
    typedef idEncounterLogicEventFlagData_t runtime_t;

    typedef idEncounterLogicEventFlagData_t asset_t;

    // ================================================ LOGIC_ENTITY_TYPE_PTR Enable use of specified entity pointer type by node pins and user variables. ================================================
    idLogicListAsset < idEncounterLogicEventFlagData_t > value; // Offset: 0x10

}; // Size: 0x28
