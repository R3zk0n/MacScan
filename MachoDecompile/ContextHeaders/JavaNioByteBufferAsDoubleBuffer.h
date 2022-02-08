// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEBUFFERASDOUBLEBUFFER_H
#define JAVANIOBYTEBUFFERASDOUBLEBUFFER_H



#import "JavaNioDoubleBuffer.h"
#import "JavaNioByteBuffer.h"

@interface JavaNioByteBufferAsDoubleBuffer : JavaNioDoubleBuffer {
    JavaNioByteBuffer *byteBuffer_;
}




-(id)initWithJavaNioByteBuffer:(id)arg0 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(CGFloat)get;
-(CGFloat)getWithInt:(int)arg0 ;
-(id)getWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(BOOL)isReadOnly;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithDouble:(CGFloat)arg0 ;
-(id)putWithInt:(int)arg0 withDouble:(CGFloat)arg1 ;
-(id)putWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)slice;
-(void)dealloc;
+(id)asDoubleBufferWithJavaNioByteBuffer:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif