// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOFLOATARRAYBUFFER_H
#define JAVANIOFLOATARRAYBUFFER_H



#import "JavaNioFloatBuffer.h"
#import "IOSFloatArray.h"

@interface JavaNioFloatArrayBuffer : JavaNioFloatBuffer {
    IOSFloatArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}




-(id)initWithFloatArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withFloatArray:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(id)slice;
-(BOOL)isReadOnly;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(float)get;
-(float)getWithInt:(int)arg0 ;
-(id)getWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(id)order;
-(id)putWithFloat:(float)arg0 ;
-(id)putWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)putWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(id)copy__WithJavaNioFloatArrayBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif