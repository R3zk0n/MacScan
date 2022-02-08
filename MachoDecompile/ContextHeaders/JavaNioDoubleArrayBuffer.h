// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIODOUBLEARRAYBUFFER_H
#define JAVANIODOUBLEARRAYBUFFER_H



#import "JavaNioDoubleBuffer.h"
#import "IOSDoubleArray.h"

@interface JavaNioDoubleArrayBuffer : JavaNioDoubleBuffer {
    IOSDoubleArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}




-(id)initWithDoubleArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withDoubleArray:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(id)slice;
-(BOOL)isReadOnly;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(CGFloat)get;
-(CGFloat)getWithInt:(int)arg0 ;
-(id)getWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(id)order;
-(id)putWithDouble:(CGFloat)arg0 ;
-(id)putWithInt:(int)arg0 withDouble:(CGFloat)arg1 ;
-(id)putWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(id)copy__WithJavaNioDoubleArrayBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif