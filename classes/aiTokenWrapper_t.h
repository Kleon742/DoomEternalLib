struct aiTokenWrapper_t
{
    // token
    aiTokenType_t token; // Offset: 0x0

    // if true, apply token to action target of this state
    bool useActionTarget; // Offset: 0x4

    // if true, reserve token even if it isn't available
    bool force; // Offset: 0x5

}; // Size: 0x8
