struct idDeclUnitTestingCriteria : idGameDeclTypeInfo
{
    // default tolerance if there are no matching criteria
    float defaultTolerance; // Offset: 0x90

    // if true, this test suite is opt-in rather than opt-out
    bool opt_in; // Offset: 0x94

}; // Size: 0x98
