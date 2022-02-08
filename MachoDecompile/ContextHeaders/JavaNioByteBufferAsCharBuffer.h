// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEBUFFERASCHARBUFFER_H
#define JAVANIOBYTEBUFFERASCHARBUFFER_H



#import "JavaNioCharBuffer.h"
#import "JavaNioByteBuffer.h"

@interface JavaNioByteBufferAsCharBuffer : JavaNioCharBuffer {
    JavaNioByteBuffer *byteBuffer_;
}




-(id)initWithJavaNioByteBuffer:(id)arg0 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(unsigned short)get;
-(unsigned short)getWithInt:(int)arg0 ;
-(id)getWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(BOOL)isReadOnly;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithChar:(unsigned short)arg0 ;
-(id)putWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(id)putWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)slice;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(void)dealloc;
+(id)asCharBufferWithJavaNioByteBuffer:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif