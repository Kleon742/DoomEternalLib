struct idDamageCompiler
{
    // list of all listeners that have registered with us.
    idList < idDamageCompiler_Listener * , TAG_IDLIST , false > listeners; // Offset: 0x0

    // Analytics for violence. ( X headshots, X kills in a frame, etc )
    idViolenceAnalytics analytics; // Offset: 0x18

}; // Size: 0x1BF0
