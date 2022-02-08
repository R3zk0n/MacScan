// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEBUFFER_H
#define JAVANIOBYTEBUFFER_H


#import <Foundation/Foundation.h>

#import "JavaNioBuffer.h"
#import "JavaNioByteOrder.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaNioByteBuffer : JavaNioBuffer <JavaLangComparable>

 {
    JavaNioByteOrder *order_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)array;
-(int)arrayOffset;
-(id)asCharBuffer;
-(id)asDoubleBuffer;
-(id)asFloatBuffer;
-(id)asIntBuffer;
-(id)asLongBuffer;
-(id)asReadOnlyBuffer;
-(id)asShortBuffer;
-(id)compact;
-(int)compareToWithId:(id)arg0 ;
-(id)duplicate;
-(BOOL)isEqual:(id)arg0 ;
-(char)get;
-(id)getWithByteArray:(id)arg0 ;
-(id)getWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
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
-(BOOL)hasArray;
-(BOOL)isDirect;
-(BOOL)isValid;
-(id)order;
-(id)orderWithJavaNioByteOrder:(id)arg0 ;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithByte:(char)arg0 ;
-(id)putWithByteArray:(id)arg0 ;
-(id)putWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)putWithJavaNioByteBuffer:(id)arg0 ;
-(id)putWithInt:(int)arg0 withByte:(char)arg1 ;
-(id)putCharWithChar:(unsigned short)arg0 ;
-(id)putCharWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(id)putDoubleWithDouble:(CGFloat)arg0 ;
-(id)putDoubleWithInt:(int)arg0 withDouble:(CGFloat)arg1 ;
-(id)putFloatWithFloat:(float)arg0 ;
-(id)putFloatWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)putIntWithInt:(int)arg0 ;
-(id)putIntWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)putLongWithLong:(NSInteger)arg0 ;
-(id)putLongWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)putShortWithShort:(short)arg0 ;
-(id)putShortWithInt:(int)arg0 withShort:(short)arg1 ;
-(id)slice;
-(void)dealloc;
+(id)allocateWithInt:(int)arg0 ;
+(id)allocateDirectWithInt:(int)arg0 ;
+(id)wrapWithByteArray:(id)arg0 ;
+(id)wrapWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif