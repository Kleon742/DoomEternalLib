struct idAbnormalPlayerMetrics : idBloatedEntity
{
    // whether we are currently tracking stats or not
    bool isActive; // Offset: 0xB88

    // remove render model when spawned, the goal here is to be able to see the model in idStudio, and not in the game, so delete that model.
    bool removeRenderModel; // Offset: 0xB89

    // keep the current stat values on activation/deactivation
    bool keepCurrentStats; // Offset: 0xB8A

    // the player that is associated with these metrics, note: if left null will use local player
    idManagedClassPtr < idPlayer > player; // Offset: 0xB90

    // stats that aren't well defined in the world, and need to be manually triggered to be tracked
    idArray < idStatBase::statValue_t , 1459 > abnormalStats; // Offset: 0xBB0

}; // Size: 0x2280
