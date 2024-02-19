struct idTarget_AmplitudeTrigger : idTarget
{
    // amplitude required to trigger in -db
    float amplitudeThreshold; // Offset: 0xB88

    // amplitude required to reset the trigger to allow the next triggering
    float amplitudeResetThreshold; // Offset: 0xB8C

    // fire targets based on the amplitude of this entity, sound parms must have wantAmplitude set
    idManagedClassPtr < idEntity > amplitudeSource; // Offset: 0xB90

    // scale amplitude by this before comparing theshold
    float amplitudeScale; // Offset: 0xBB0

    bool alreadyTriggered; // Offset: 0xBB4

}; // Size: 0xBB8
