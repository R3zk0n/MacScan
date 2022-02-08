// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEBUFFERASINTBUFFER_H
#define JAVANIOBYTEBUFFERASINTBUFFER_H



#import "JavaNioIntBuffer.h"
#import "JavaNioByteBuffer.h"

@interface JavaNioByteBufferAsIntBuffer : JavaNioIntBuffer {
    JavaNioByteBuffer *byteBuffer_;
}




-(id)initWithJavaNioByteBuffer:(id)arg0 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(int)get;
-(int)getWithInt:(int)arg0 ;
-(id)getWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(BOOL)isReadOnly;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithInt:(int)arg0 ;
-(id)putWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)putWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)slice;
-(void)dealloc;
+(id)asIntBufferWithJavaNioByteBuffer:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif