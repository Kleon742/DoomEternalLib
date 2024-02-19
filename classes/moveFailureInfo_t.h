struct moveFailureInfo_t
{
    // moveReason_t - the reason the AI was moving when the failure occured
    unsigned char moveReason; // Offset: 0x0

    // aiMoveStatus_t - the status code returned by the movement system
    unsigned char moveStatus; // Offset: 0x1

    // nothing right now
    unsigned char pad[2]; // Offset: 0x2

    // time when the move failed
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > failureTime; // Offset: 0x8

}; // Size: 0x10
