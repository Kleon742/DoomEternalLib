struct idTarget_Subtitle : idTarget
{
    // How far away the subtitle will show up. {{ units = m }}
    float visibleDistance; // Offset: 0xB88

    // Subtitle to show.
    idStrId subtitle; // Offset: 0xB8C

    // Speaker (can be empty)
    idStrId speaker; // Offset: 0xB90

    // how long to keep the subtitle up for. {{ units = ms }}
    int duration; // Offset: 0xB94

}; // Size: 0xB98
