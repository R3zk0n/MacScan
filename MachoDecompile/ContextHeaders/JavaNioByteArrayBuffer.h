// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEARRAYBUFFER_H
#define JAVANIOBYTEARRAYBUFFER_H



#import "JavaNioByteBuffer.h"
#import "IOSByteArray.h"

@interface JavaNioByteArrayBuffer : JavaNioByteBuffer {
    IOSByteArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}




-(id)initWithByteArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)asReadOnlyBuffer;
-(id)compact;
-(id)duplicate;
-(id)slice;
-(BOOL)isReadOnly;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)getWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)getWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)getWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)getWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)getWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)getWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)getWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(char)get;
-(char)getWithInt:(int)arg0 ;
-(unsigned short)getChar;
-(unsigned short)getCharWithInt:(int)arg0 ;
-(CGFloat)getDouble;
-(CGFloat)getDoubleWithInt:(int)arg0 ;
-(float)getFloat;
-(float)getFloatWithInt:(int)arg0 ;
-(int)getInt;
-(int)getIntWithInt:(int)arg0 ;
-(NSInteger)getLong;
-(NSInteger)getLongWithInt:(int)arg0 ;
-(short)getShort;
-(short)getShortWithInt:(int)arg0 ;
-(BOOL)isDirect;
-(id)putWithByte:(char)arg0 ;
-(id)putWithInt:(int)arg0 withByte:(char)arg1 ;
-(id)putWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)putWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)putWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)putWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)putWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)putWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)putWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)putCharWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(id)putCharWithChar:(unsigned short)arg0 ;
-(id)putDoubleWithDouble:(CGFloat)arg0 ;
-(id)putDoubleWithInt:(int)arg0 withDouble:(CGFloat)arg1 ;
-(id)putFloatWithFloat:(float)arg0 ;
-(id)putFloatWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)putIntWithInt:(int)arg0 ;
-(id)putIntWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)putLongWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)putLongWithLong:(NSInteger)arg0 ;
-(id)putShortWithInt:(int)arg0 withShort:(short)arg1 ;
-(id)putShortWithShort:(short)arg0 ;
-(id)asCharBuffer;
-(id)asDoubleBuffer;
-(id)asFloatBuffer;
-(id)asIntBuffer;
-(id)asLongBuffer;
-(id)asShortBuffer;
-(void)dealloc;
+(id)copy__WithJavaNioByteArrayBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif