struct idTarget_DevLoadoutSwap : idTarget
{
    // the new inventory to swap to
    idDeclDevInvLoadout* newDevloadout; // Offset: 0xB88

    // whether we need to clear the prev inventory
    bool clearPrevInventory; // Offset: 0xB90

}; // Size: 0xB98
