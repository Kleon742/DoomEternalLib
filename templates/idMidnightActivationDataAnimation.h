// idMidnightActivationDataAnimation < idMidnightLightData , idMidnightLightTangentData , idMidnightLightDataAnimation >
template <typename data_t, typename tangent_t>
struct idMidnightActivationDataAnimation
{
    // idMidnightActivationDataAnimation < idMidnightLightData , idMidnightLightTangentData , idMidnightLightDataAnimation >::frame_s
    struct frame_s
    {
        data_t data; // Offset: 0x0

        tangent_t tangentIn; // Offset: 0x108

        tangent_t tangentOut; // Offset: 0x128

    }; // Size: 0x148

    // idMidnightActivationDataAnimation < idMidnightLightData , idMidnightLightTangentData , idMidnightLightDataAnimation >::activation_s
    struct activation_s
    {
        // One frame past the last frame of this activation block.
        float end; // Offset: 0x0

        int firstKey; // Offset: 0x4

        int numKeys; // Offset: 0x8

    }; // Size: 0xC

    // idMidnightActivationDataAnimation < idMidnightLightData , idMidnightLightTangentData , idMidnightLightDataAnimation >::idSort_ActivationIndex
    struct idSort_ActivationIndex : idSort_Quick < int , idMidnightActivationDataAnimation < data_t , tangent_t , data_tAnimation >::idSort_ActivationIndex >
    {
        idMidnightActivationDataAnimation* anim; // Offset: 0x8

    }; // Size: 0x10

    idList < float , TAG_IDLIST , false > keyTimes; // Offset: 0x0

    idList < idMidnightActivationDataAnimation < data_t , tangent_t , data_tAnimation >::frame_s , TAG_IDLIST , false > keyFrames; // Offset: 0x18

    idList < float , TAG_IDLIST , false > activationTimes; // Offset: 0x30

    idList < idMidnightActivationDataAnimation < data_t , tangent_t , data_tAnimation >::activation_s , TAG_IDLIST , false > activations; // Offset: 0x48

    idCurves::loopMode_t loopMode; // Offset: 0x60

}; // Size: 0x68
