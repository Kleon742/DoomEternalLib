struct narrativeAction_t
{
    struct narrativeAnimationParms_t
    {
        // subweb and animation name of the anim web state to play on the given entity
        idAnimWebPath destAnimationPath; // Offset: 0x0

        // subweb and animation name of the anim web state to play on the given entity
        idAnimWebPath viaAnimationPath; // Offset: 0x30

    }; // Size: 0x60

    struct narrativeFXParms_t
    {
        // fxCondition to use on fx manager of entity
        fxCondition_t fxCondition; // Offset: 0x0

    }; // Size: 0x4

    struct narrativeSoundParms_t
    {
        // Sound Channel to play from.
        soundChannel_t channel; // Offset: 0x0

        // Sound Shader to play.
        idSoundEvent* sound; // Offset: 0x8

    }; // Size: 0x10

    struct narrativeScriptParms_t
    {
        // Sound Channel to play from.
        idStr scriptFunction; // Offset: 0x0

    }; // Size: 0x30

    struct narrativeTableStateChangeParms_t
    {
        // Model Index to act on.
        int modelIndex; // Offset: 0x0

        // dest anim to play
        idStr destAnim; // Offset: 0x8

        // via this anim.
        idStr viaAnim; // Offset: 0x38

    }; // Size: 0x68

    struct narrativeHotspotParms_t
    {
        // model index within the table to act on ( -1 is table )
        int modelIndex; // Offset: 0x0

        // event to trigger ( 0 = condition code 1 )
        int eventIndex; // Offset: 0x4

        // description for point
        idStrId desc; // Offset: 0x8

        // index of hotspot
        int hotspotIndex; // Offset: 0xC

    }; // Size: 0x10

    struct narrativeShowHideModelParms_t
    {
        // model index within the table to act on ( -1 is table )
        int modelIndex; // Offset: 0x0

        // tag to to attach.
        idStr tag; // Offset: 0x8

    }; // Size: 0x38

    // type of action to perform
    narrativeActionType_t type; // Offset: 0x0

    // index of the actor in the design director entity to play animation on
    int actorIndex; // Offset: 0x4

    // NARRATIVE_ACTION_ANIM Parameters
    narrativeAction_t::narrativeAnimationParms_t animationParms; // Offset: 0x8

    // NARRATIVE_ACTION_FX Parameters
    narrativeAction_t::narrativeFXParms_t fxParms; // Offset: 0x68

    // NARRATIVE_ACTION_VOICETRACK Parameters
    narrativeAction_t::narrativeSoundParms_t soundParms; // Offset: 0x70

    // NARRATIVE_ACTION_SCRIPTFUNCTION Parameters
    narrativeAction_t::narrativeScriptParms_t scriptParms; // Offset: 0x80

    // NARRATIVE_ACTION_NARRATIVETABLE_CHANGESTATE Parameters
    narrativeAction_t::narrativeTableStateChangeParms_t narrativeTableParms; // Offset: 0xB0

    // NARRATIVE_ACTION_ADD_HOTSPOT Parameters
    narrativeAction_t::narrativeHotspotParms_t hotspotParms; // Offset: 0x118

    // NARRATIVE_ACTION_SHOW_MODEL Parameters
    narrativeAction_t::narrativeShowHideModelParms_t showHideModelParms; // Offset: 0x128

}; // Size: 0x160
