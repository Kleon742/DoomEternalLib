enum specifierFlags_t : int
{
    SPECIFIERFLAG_CONST = 1,
    SPECIFIERFLAG_VOLATILE = 2,
    SPECIFIERFLAG_AUTO = 4,
    SPECIFIERFLAG_REGISTER = 8,
    SPECIFIERFLAG_STATIC = 16,
    SPECIFIERFLAG_EXTERN = 32,
    SPECIFIERFLAG_MUTABLE = 64,
    SPECIFIERFLAG_INLINE = 128,
    SPECIFIERFLAG_VIRTUAL = 256,
    SPECIFIERFLAG_EXPLICIT = 512,
    SPECIFIERFLAG_FRIEND = 1024,
    SPECIFIERFLAG_TYPEDEF = 2048,
    SPECIFIERFLAG_METASTATE = 4096,
    SPECIFIERFLAG_UNINITIALIZEDTYPE = 8192,
    SPECIFIERFLAG_SAVESKIP = 16384,
    SPECIFIERFLAG_UNUSED1 = 32768,
    SPECIFIERFLAG_EDIT = 65536,
    SPECIFIERFLAG_DESIGN = 131072,
    SPECIFIERFLAG_DEF = 262144,
    SPECIFIERFLAG_ENUMBITFLAGS = 524288,
    SPECIFIERFLAG_SCRIPTDEFINE = 1048576,
    SPECIFIERFLAG_BOLD = 2097152,
    SPECIFIERFLAG_META = 4194304,
    SPECIFIERFLAG_HIDDEN = 8388608,
    SPECIFIERFLAG_EXPORTED = 16777216,
    SPECIFIERFLAG_PURE = 33554432,
    SPECIFIERFLAG_DISPLAY = 67108864,
    SPECIFIERFLAG_NODEINPUT = 134217728,
    SPECIFIERFLAG_NODEOUTPUT = 268435456,
    SPECIFIERFLAG_PARM_MUTABLE = 536870912,
    SPECIFIERFLAG_NOCOMMENT = 1073741824,
    SPECIFIERFLAG_ALLOWDEFAULTLOAD = -2147483648
};