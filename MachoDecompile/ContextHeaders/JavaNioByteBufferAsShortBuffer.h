// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEBUFFERASSHORTBUFFER_H
#define JAVANIOBYTEBUFFERASSHORTBUFFER_H



#import "JavaNioShortBuffer.h"
#import "JavaNioByteBuffer.h"

@interface JavaNioByteBufferAsShortBuffer : JavaNioShortBuffer {
    JavaNioByteBuffer *byteBuffer_;
}




-(id)initWithJavaNioByteBuffer:(id)arg0 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(short)get;
-(short)getWithInt:(int)arg0 ;
-(id)getWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(BOOL)isReadOnly;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithShort:(short)arg0 ;
-(id)putWithInt:(int)arg0 withShort:(short)arg1 ;
-(id)putWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)slice;
-(void)dealloc;
+(id)asShortBufferWithJavaNioByteBuffer:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif