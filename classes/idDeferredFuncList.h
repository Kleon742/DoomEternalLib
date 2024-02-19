struct idDeferredFuncList
{
    struct deferredItem_t
    {
        std::function < void ( void ) > func; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x40

        std::function < bool ( void ) > condition; // Offset: 0x48

    }; // Size: 0x88

    idList < idDeferredFuncList::deferredItem_t , TAG_IDLIST , false > queue; // Offset: 0x8

    idSysMutex mutex; // Offset: 0x20

}; // Size: 0x48
