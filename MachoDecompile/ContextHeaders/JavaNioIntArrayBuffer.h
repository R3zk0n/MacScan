// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOINTARRAYBUFFER_H
#define JAVANIOINTARRAYBUFFER_H



#import "JavaNioIntBuffer.h"
#import "IOSIntArray.h"

@interface JavaNioIntArrayBuffer : JavaNioIntBuffer {
    IOSIntArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}




-(id)initWithIntArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withIntArray:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(id)slice;
-(BOOL)isReadOnly;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(int)get;
-(int)getWithInt:(int)arg0 ;
-(id)getWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(id)order;
-(id)putWithInt:(int)arg0 ;
-(id)putWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)putWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(id)copy__WithJavaNioIntArrayBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif