struct idTarget_PlayerWhiplash : idBloatedEntity
{
    // radius of effect (magnitude is somewhat lighter at edges of this radius) {{ units = m }}
    float radius; // Offset: 0xB88

    // positive = push, negative = pull (1.0 is an average-looking explosion)
    float magnitude; // Offset: 0xB8C

}; // Size: 0xB90
