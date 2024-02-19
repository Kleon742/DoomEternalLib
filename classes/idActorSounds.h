struct idActorSounds
{
    // sound shader to play for small amounts of damage (note Player uses sndPainSmall on playerProps!)
    idSoundEvent* sndPainSmall; // Offset: 0x0

    // sound shader to play for medium amounts of damage (note Player uses sndPainMed on playerProps!)
    idSoundEvent* sndPainMedium; // Offset: 0x8

    // sound shader to play for large amounts of damage (note Player uses sndPainLarge on playerProps!)
    idSoundEvent* sndPainLarge; // Offset: 0x10

    // sound shader to play for huge amounts of damage
    idSoundEvent* sndPainHuge; // Offset: 0x18

    // NOW USED ONLY IN THE EDITOR VIEW. Need to remove
    idSoundEvent* sndFootsteps; // Offset: 0x20

    // Sound shader to play when actor goes into stagger.
    idSoundEvent* sndPainStagger; // Offset: 0x28

    // ragdoll VO category
    idDeclAIVoiceOver::aiVoiceOverCategory_t sndRagdollVOCategory; // Offset: 0x30

}; // Size: 0x38
