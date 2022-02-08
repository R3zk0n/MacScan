// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEBUFFERASFLOATBUFFER_H
#define JAVANIOBYTEBUFFERASFLOATBUFFER_H



#import "JavaNioFloatBuffer.h"
#import "JavaNioByteBuffer.h"

@interface JavaNioByteBufferAsFloatBuffer : JavaNioFloatBuffer {
    JavaNioByteBuffer *byteBuffer_;
}




-(id)initWithJavaNioByteBuffer:(id)arg0 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(float)get;
-(float)getWithInt:(int)arg0 ;
-(id)getWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(BOOL)isReadOnly;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithFloat:(float)arg0 ;
-(id)putWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)putWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)slice;
-(void)dealloc;
+(id)asFloatBufferWithJavaNioByteBuffer:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif