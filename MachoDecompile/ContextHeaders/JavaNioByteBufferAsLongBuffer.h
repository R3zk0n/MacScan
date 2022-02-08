// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEBUFFERASLONGBUFFER_H
#define JAVANIOBYTEBUFFERASLONGBUFFER_H



#import "JavaNioLongBuffer.h"
#import "JavaNioByteBuffer.h"

@interface JavaNioByteBufferAsLongBuffer : JavaNioLongBuffer {
    JavaNioByteBuffer *byteBuffer_;
}




-(id)initWithJavaNioByteBuffer:(id)arg0 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(NSInteger)get;
-(NSInteger)getWithInt:(int)arg0 ;
-(id)getWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(BOOL)isReadOnly;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithLong:(NSInteger)arg0 ;
-(id)putWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)putWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)slice;
-(void)dealloc;
+(id)asLongBufferWithJavaNioByteBuffer:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif