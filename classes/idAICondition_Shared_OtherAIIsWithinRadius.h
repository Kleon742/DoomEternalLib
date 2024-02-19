struct idAICondition_Shared_OtherAIIsWithinRadius : idAICondition
{
    // The monster type to search for
    aiMonsterType_t monsterType; // Offset: 0x18

    // Radius to check
    float radius; // Offset: 0x20

    // If the other AI or this AI is moving away then we don't consider it within the radius
    bool movingAwayExcluded; // Offset: 0x24

    // (degrees) If the angle between the forward movement and the direction of the other AI is greater than this, then he is moving away and so the radius check fails
    float movingAwayMinAngle; // Offset: 0x28

}; // Size: 0x30
