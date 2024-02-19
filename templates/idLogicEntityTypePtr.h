// idLogicEntityTypePtr < idLight >
template <typename _entity_>
struct idLogicEntityTypePtr
{
    logicEntityNameShared_t* entityName; // Offset: 0x0

    idManagedClassPtr < _entity_ > entity; // Offset: 0x8

}; // Size: 0x28
