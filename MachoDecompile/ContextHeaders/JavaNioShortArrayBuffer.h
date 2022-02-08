// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSHORTARRAYBUFFER_H
#define JAVANIOSHORTARRAYBUFFER_H



#import "JavaNioShortBuffer.h"
#import "IOSShortArray.h"

@interface JavaNioShortArrayBuffer : JavaNioShortBuffer {
    IOSShortArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}




-(id)initWithShortArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withShortArray:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(id)slice;
-(BOOL)isReadOnly;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(short)get;
-(short)getWithInt:(int)arg0 ;
-(id)getWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(id)order;
-(id)putWithShort:(short)arg0 ;
-(id)putWithInt:(int)arg0 withShort:(short)arg1 ;
-(id)putWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(id)copy__WithJavaNioShortArrayBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif