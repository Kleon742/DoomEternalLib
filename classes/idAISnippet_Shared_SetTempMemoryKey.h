struct idAISnippet_Shared_SetTempMemoryKey : idAISnippet
{
    enum aiMemoryKeyVec3Type_t : int
    {
        NONE = 0,
        AI_CURRENT_AIMPOINT = 1,
        AI_CURRENT_ORIGIN = 2,
        TARGET_CURRENT_ORIGIN = 3,
        TARGET_PREDICTED_ORIGIN = 4
    };

    // Name of the temp memory key to change
    idAtomicString keyName; // Offset: 0x18

    // If non-empty, copy value from existing temp memory key, using copyName for lookup
    idAtomicString copyName; // Offset: 0x20

    // If true, consider copyName as CVar name to look up in CVar system
    bool copyFromCVar; // Offset: 0x28

    // integer value to set, or add to if sumValues is true
    int keyValue; // Offset: 0x2C

    // if add to existing value rather than setting
    bool sumValues; // Offset: 0x30

    // If non-empty, specifies string value for temp memory key
    idAtomicString strKeyValue; // Offset: 0x38

    // If not NONE, sets temp memory key value to an idVec3 value according to the enum
    idAISnippet_Shared_SetTempMemoryKey::aiMemoryKeyVec3Type_t vec3Type; // Offset: 0x40

    // If vec3Type is TARGET_PREDICTED_ORIGIN, predict target's position this far into the future {{ units = s }}
    idTypesafeTime < float , secondUnique_t , 1 > targetOriginPredictionSec; // Offset: 0x44

}; // Size: 0x48
