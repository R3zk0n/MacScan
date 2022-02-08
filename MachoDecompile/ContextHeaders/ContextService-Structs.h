typedef struct J2ObjcMethodInfo {
    char * field0;
    char * field1;
    char * field2;
    unsigned short field3;
    char * field4;
    char * field5;
} J2ObjcMethodInfo;

typedef struct J2ObjcFieldInfo {
    char * field0;
    char * field1;
    unsigned short field2;
    char * field3;
    void field4;
    char * field5;
    unk field6;
    void field7;
    char field8;
    unsigned short field9;
    short field10;
    int field11;
    NSInteger field12;
    float field13;
    CGFloat field14;
    BOOL field15;
} J2ObjcFieldInfo;

typedef struct J2ObjCEnclosingMethodInfo {
    char * field0;
    char * field1;
} J2ObjCEnclosingMethodInfo;

typedef struct J2ObjcClassInfo {
    unsigned int field0;
    char * field1;
    char * field2;
    char * field3;
    unsigned short field4;
    unsigned short field5;
    J2ObjcMethodInfo field6;
    unsigned short field7;
    J2ObjcFieldInfo field8;
    unsigned short field9;
    char * field10;
    unsigned short field11;
    char * field12;
    J2ObjCEnclosingMethodInfo field13;
    char * field14;
} J2ObjcClassInfo;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct JreStringBuilder {
    unsigned short buffer_;
    int bufferSize_;
    int count_;
} JreStringBuilder;

typedef struct __darwin_pthread_handler_rec {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
    NSInteger field0;
    __darwin_pthread_handler_rec field1;
    char field2;
} _opaque_pthread_t;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _CFBurstTrie {
} // Error Processing Struct Fields

