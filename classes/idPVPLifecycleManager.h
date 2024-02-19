struct idPVPLifecycleManager
{
    struct podiumSlot_t
    {
        // entity in map indicating location for podium
        idManagedClassPtr < idEntity > position; // Offset: 0x0

        // -1 if not used yet, 0+ is player index using this slot
        int usedByPlayer; // Offset: 0x20

    }; // Size: 0x28

    // entity defs to use for podium characters
    idList < const idDeclEntityDef * , TAG_IDLIST , false > podiumAvatarEntDefs; // Offset: 0x8

    // entity defs to use for podiums
    idList < const idDeclEntityDef * , TAG_IDLIST , false > podiumEntDefs; // Offset: 0x20

    // entity defs to use for podium decorations
    idList < const idDeclEntityDef * , TAG_IDLIST , false > podiumDecorationEntDefs; // Offset: 0x38

    // names of layers that will turn on for intro/outro and off for game itself
    idList < idStr , TAG_IDLIST , false > podiumLayers; // Offset: 0x50

    // entities in map to use for slayer podium positions (1,2,3 etc will be appended as required)
    idStr slayerPodiumEntities; // Offset: 0x68

    // entities in map to use for demon podium positions (1,2,3 etc will be appended as required)
    idStr demonPodiumEntities; // Offset: 0x98

    // logic event to broadcast for intro sequence
    idStr introLogicEvent; // Offset: 0xC8

    // logic event to broadcast to stop intro sequence (when cut short)
    idStr introStopLogicEvent; // Offset: 0xF8

    // logic event to broadcast for slayer victory sequence
    idStr slayerVictoryLogicEvent; // Offset: 0x128

    // logic event to broadcast for demon victory sequence
    idStr demonVictoryLogicEvent; // Offset: 0x158

    // position of slayer podium when slayer wins
    idStr outro_slayer_podium_slayer_winner_str; // Offset: 0x188

    // position of demon podium 1 when slayer wins
    idStr outro_demon_podium_demon_loser_slot_1_str; // Offset: 0x1B8

    // position of demon podium 2 when slayer wins
    idStr outro_demon_podium_demon_loser_slot_2_str; // Offset: 0x1E8

    // position of slayer podium when demons win
    idStr outro_slayer_podium_slayer_loser_str; // Offset: 0x218

    // position of demon podium 1 when demons win
    idStr outro_demon_podium_demon_winner_slot_1_str; // Offset: 0x248

    // position of demon podium 2 when demons win
    idStr outro_demon_podium_demon_winner_slot_2_str; // Offset: 0x278

    // position of your own podium after victory sequence
    idStr outro_self_podium_alone; // Offset: 0x2A8

    // root camera entity
    idStr rootCameraStr; // Offset: 0x2D8

    // character animation blend time (in ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > characterAnimBlendMS; // Offset: 0x308

    // sound to play when another player first appears
    idSoundEvent* playerAppearSound; // Offset: 0x310

    idGameChallenge* gameChallenge; // Offset: 0x318

    idManagedClassPtr < idEntity > selfFinalPosition; // Offset: 0x320

    idList < idPVPLifecycleManager::podiumSlot_t , TAG_IDLIST , false > slayerPositions; // Offset: 0x340

    idList < idPVPLifecycleManager::podiumSlot_t , TAG_IDLIST , false > demonPositions; // Offset: 0x358

    idList < idCharacterPodium , TAG_IDLIST , false > podiums; // Offset: 0x370

    idList < int , TAG_IDLIST , false > pendingPlayerUpdates; // Offset: 0x388

    lifecycleManagerState_t state; // Offset: 0x3A0

    // team that won
    gameTeam_t winner; // Offset: 0x3A4

    bool localHudInitialized; // Offset: 0x3A8

    // make sure we revert forced FOV after Intro sequence
    bool fovNeedsRevert; // Offset: 0x3A9

    // have we reached the into end event locally via the midnight sequence?
    bool introEndedLocally; // Offset: 0x3AA

    idManagedClassPtr < idEntity > rootCamera; // Offset: 0x3B0

    uint16 lobbyUsersBroadcastId; // Offset: 0x3D0

    uint16 ghostUsersBroadcastId; // Offset: 0x3D2

}; // Size: 0x3D8
