// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOLONGARRAYBUFFER_H
#define JAVANIOLONGARRAYBUFFER_H



#import "JavaNioLongBuffer.h"
#import "IOSLongArray.h"

@interface JavaNioLongArrayBuffer : JavaNioLongBuffer {
    IOSLongArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}




-(id)initWithLongArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(id)slice;
-(BOOL)isReadOnly;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(NSInteger)get;
-(NSInteger)getWithInt:(int)arg0 ;
-(id)getWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(id)order;
-(id)putWithLong:(NSInteger)arg0 ;
-(id)putWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)putWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(id)copy__WithJavaNioLongArrayBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif