struct idLexerUTF8
{
    // arbitrary name of the buffer we're parsing
    idStr filename; // Offset: 0x0

    // lexer flags
    int flags; // Offset: 0x30

    // pointer to the buffer we're parsing
    unsigned char* buffer; // Offset: 0x38

    // current pointer in the script
    unsigned char* cur; // Offset: 0x40

    // pointer to the end of the script
    unsigned char* end; // Offset: 0x48

    // script pointer before reading token
    unsigned char* prev; // Offset: 0x50

    size_t len; // Offset: 0x58

    // previous line
    int lastline; // Offset: 0x60

    // current line
    int line; // Offset: 0x64

    punctuation_t* punctuations; // Offset: 0x68

    // ASCII table with punctuations
    int* punctuationtable; // Offset: 0x70

    // next punctuation in chain
    int* nextpunctuation; // Offset: 0x78

    bool loaded; // Offset: 0x80

    bool hadError; // Offset: 0x81

    bool hadWarning; // Offset: 0x82

}; // Size: 0x88
