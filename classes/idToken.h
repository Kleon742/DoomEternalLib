struct idToken : idStr
{
    // token type
    int type; // Offset: 0x30

    // token sub type
    int subtype; // Offset: 0x34

    // line in script the token was on
    int line; // Offset: 0x38

    // number of lines crossed in white space before token
    int linesCrossed; // Offset: 0x3C

    // token flags, used for recursive defines
    int flags; // Offset: 0x40

    // integer value
    unsigned long long intvalue; // Offset: 0x48

    // floating point value
    float floatvalue; // Offset: 0x50

    // start of white space before token, only used by idLexer
    char* whiteSpaceStart_p; // Offset: 0x58

    // end of white space before token, only used by idLexer
    char* whiteSpaceEnd_p; // Offset: 0x60

    // next token in chain, only used by idParser
    idToken* next; // Offset: 0x68

}; // Size: 0x70
