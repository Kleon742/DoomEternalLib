struct renderProgPermutationData_t
{
    // Defines used during permutation, each define is fetched as a renderProgFlag
    idStaticList < idStr , 64 , false , TAG_IDLIST > defines; // Offset: 0x0

    // Flag combination for programs, each flag is fetched from the renderProgFlag from a permuteDefine
    idList < unsigned int , TAG_IDLIST , false > flags; // Offset: 0xC18

    // Parallel array for flags, mask of platform support per permutation
    idList < unsigned int , TAG_IDLIST , false > platformFlags; // Offset: 0xC30

    // Default program permutation to generate / use
    unsigned int defaultPerm; // Offset: 0xC48

    // These options are always optioned onto the program (even default one)
    unsigned int options; // Offset: 0xC4C

}; // Size: 0xC50
