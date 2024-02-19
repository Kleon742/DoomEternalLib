struct idAISnippet_Shared_ForceAwareness : idAISnippet
{
    // type
    aiSensoryPerceptType_t perceptType; // Offset: 0x18

    // clarity position
    aiPerceptClarity_t clarity_position; // Offset: 0x1C

    // clarity source
    aiPerceptClarity_t clarity_source; // Offset: 0x20

    // if true, just stomp the model's current values with these
    bool immediate; // Offset: 0x24

}; // Size: 0x28
