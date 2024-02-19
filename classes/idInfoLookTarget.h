struct idInfoLookTarget : idInfo
{
    struct lookerInfo_t
    {
        // last AI that looked at me
        idManagedClassPtr < const idEntity > looker; // Offset: 0x0

        // next time AI can look
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextLookTime; // Offset: 0x20

    }; // Size: 0x28

    // time AI can look at this target, in seconds
    float lookTime; // Offset: 0xB90

    // how long an AI must wait to look at this target again
    float lookDelay; // Offset: 0xB94

    // maximum distance at which an AI will consider this target {{ units = m }}
    float maxDist; // Offset: 0xB98

    // if true, the AI will aim their weapon or torso at this target
    bool aim; // Offset: 0xB9C

    // info about who looked at us
    idArray < idInfoLookTarget::lookerInfo_t , 3 > lookerInfo; // Offset: 0xBA0

    // next free look info
    int nextLookerInfo; // Offset: 0xC18

}; // Size: 0xC20
