struct prohibitionUserInfo_t
{
    idStr id; // Offset: 0x0

    idStr localKey; // Offset: 0x30

    idStr prohibitionReasonMessageId; // Offset: 0x60

    idStr prohibitionDismissMessageId; // Offset: 0x90

    idStr prohibitionPartyReasonMessageId; // Offset: 0xC0

    idStr prohibitionPartyDismissMessageId; // Offset: 0xF0

    prohibitionMessage_t prohibitionReasonMessage; // Offset: 0x120

    prohibitionMessage_t prohibitionDismissMessage; // Offset: 0x1E0

    prohibitionMessage_t prohibitionPartyReasonMessage; // Offset: 0x2A0

    prohibitionMessage_t prohibitionPartyDismissMessage; // Offset: 0x360

    prohibitionFeatureType_t featureType; // Offset: 0x420

    prohibitionEnforcementType_t enforcementType; // Offset: 0x424

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > decayTime; // Offset: 0x428

    unsigned char infractions; // Offset: 0x430

    unsigned char max_infractions; // Offset: 0x431

    bool messageVisible; // Offset: 0x432

    bool alertVisible; // Offset: 0x433

    bool indicatorVisible; // Offset: 0x434

}; // Size: 0x438
