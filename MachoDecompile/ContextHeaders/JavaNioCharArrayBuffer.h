// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARARRAYBUFFER_H
#define JAVANIOCHARARRAYBUFFER_H



#import "JavaNioCharBuffer.h"
#import "IOSCharArray.h"

@interface JavaNioCharArrayBuffer : JavaNioCharBuffer {
    IOSCharArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}




-(id)initWithCharArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(id)slice;
-(BOOL)isReadOnly;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(unsigned short)get;
-(unsigned short)getWithInt:(int)arg0 ;
-(id)getWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isDirect;
-(id)order;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(id)putWithChar:(unsigned short)arg0 ;
-(id)putWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(id)putWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)description;
-(void)dealloc;
+(id)copy__WithJavaNioCharArrayBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif