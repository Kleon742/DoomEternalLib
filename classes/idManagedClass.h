struct idManagedClass : idClass
{
    enum enum_5800 : int
    {
        NUM_MANAGED_MUTEXES = 64
    };

    typedef idManagedClassPtr < const idManagedClass > weakPtr_t;

    // The number/index into the game local managed object array
    int objectNumber; // Offset: 0x10

    // Head pointer of the weak ref linked list
    idManagedClassPtr < const idManagedClass >* weakRefsHead; // Offset: 0x18

    // If a new object is being created that will want to reuse all of our weakRefs, we need to mark that.
    bool markWeakRefsForReuse; // Offset: 0x20

}; // Size: 0x28
