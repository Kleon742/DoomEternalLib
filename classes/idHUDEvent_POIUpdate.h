struct idHUDEvent_POIUpdate
{
    struct entityVec_t
    {
        float x; // Offset: 0x0

        float y; // Offset: 0x4

        float z; // Offset: 0x8

    }; // Size: 0xC

    struct eventInfo_t
    {
        struct objectiveInfo_t
        {
            idDeclPOI* decl; // Offset: 0x0

            idHUDEvent_POIUpdate::entityVec_t pos; // Offset: 0x8

            idHUDEvent_POIUpdate::entityVec_t offScreenPos; // Offset: 0x14

            int overrideColor; // Offset: 0x20

            // for display time fade
            float fadeAlpha; // Offset: 0x24

            int duration; // Offset: 0x28

            int creationTime; // Offset: 0x2C

            int refreshTime; // Offset: 0x30

            char label[64]; // Offset: 0x34

            bool hasLOS; // Offset: 0x74

            bool usesLOS; // Offset: 0x75

            bool isDemonBountyPOI; // Offset: 0x76

            bool isTimedBountyPOI; // Offset: 0x77

            int entityNum; // Offset: 0x78

            // for various lerps
            float lerpAmount; // Offset: 0x7C

            float distanceToPlayer; // Offset: 0x80

            int uid; // Offset: 0x84

            bool drawClosest; // Offset: 0x88

            bool hidden; // Offset: 0x89

        }; // Size: 0x90

        idHUDEvent_POIUpdate::eventInfo_t::objectiveInfo_t pois[32]; // Offset: 0x0

        int numPOIs; // Offset: 0x1200

    }; // Size: 0x1208

    idHUDEvent_POIUpdate::eventInfo_t info; // Offset: 0x0

}; // Size: 0x1208
