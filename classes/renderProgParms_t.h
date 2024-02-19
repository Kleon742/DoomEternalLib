struct renderProgParms_t
{
    // these options effect the output PT_PC, PT_ORBIS, etc
    progTarget_t target; // Offset: 0x0

    idResourceVariation variation; // Offset: 0x4

    // no effect on output, just does additional validation checks r_validateRenderProgs.GetBool()
    bool validateInOutParms; // Offset: 0x8

    // not done for inherited programs, we don't know usage yet
    bool validateAttribUsage; // Offset: 0x9

}; // Size: 0xC
