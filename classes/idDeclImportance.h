struct idDeclImportance : idGameDeclTypeInfo
{
    enum importanceFactor_t : int
    {
        DISTANCE_TO_TARGET = 0,
        CLOSEST_TO_RETICLE = 1,
        LINE_OF_SIGHT = 2,
        NO_LINE_OF_SIGHT = 3,
        LAST_HIT_TIME = 4,
        FACING_DIRECTION = 5,
        CLIP_SIZE = 6,
        AI2_IMPORTANCE_LEVEL = 7
    };

    struct importanceWeight_t
    {
        // What this weight relies on.
        idDeclImportance::importanceFactor_t factor; // Offset: 0x0

        // the weight of this factor on the importance grade.
        float weight; // Offset: 0x4

    }; // Size: 0x8

    // list of importance Weights
    idList < idDeclImportance::importanceWeight_t , TAG_IDLIST , false > importanceWeights; // Offset: 0x90

    // How long to consider importance for last hit.
    idTypesafeTime < int , millisecondUnique_t , 1000 > maxLastHitTime; // Offset: 0xA8

    // max distance for calculating Distance based grades.
    float maxDistance; // Offset: 0xAC

    // max clip size for calculating clip size based grades.
    float maxClipSize; // Offset: 0xB0

}; // Size: 0xB8
