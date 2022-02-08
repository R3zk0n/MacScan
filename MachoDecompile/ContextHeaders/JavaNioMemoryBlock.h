// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOMEMORYBLOCK_H
#define JAVANIOMEMORYBLOCK_H


#import <Foundation/Foundation.h>


@interface JavaNioMemoryBlock : NSObject {
    NSInteger address_;
    NSInteger size_;
}




-(id)initWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(id)array;
-(void)free;
-(void)pokeByteWithInt:(int)arg0 withByte:(char)arg1 ;
-(void)pokeByteArrayWithInt:(int)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)pokeCharArrayWithInt:(int)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)pokeDoubleArrayWithInt:(int)arg0 withDoubleArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)pokeFloatArrayWithInt:(int)arg0 withFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)pokeIntArrayWithInt:(int)arg0 withIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)pokeLongArrayWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)pokeShortArrayWithInt:(int)arg0 withShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(char)peekByteWithInt:(int)arg0 ;
-(void)peekByteArrayWithInt:(int)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)peekCharArrayWithInt:(int)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)peekDoubleArrayWithInt:(int)arg0 withDoubleArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)peekFloatArrayWithInt:(int)arg0 withFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)peekIntArrayWithInt:(int)arg0 withIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)peekLongArrayWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)peekShortArrayWithInt:(int)arg0 withShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)pokeShortWithInt:(int)arg0 withShort:(short)arg1 withJavaNioByteOrder:(id)arg2 ;
-(short)peekShortWithInt:(int)arg0 withJavaNioByteOrder:(id)arg1 ;
-(void)pokeIntWithInt:(int)arg0 withInt:(int)arg1 withJavaNioByteOrder:(id)arg2 ;
-(int)peekIntWithInt:(int)arg0 withJavaNioByteOrder:(id)arg1 ;
-(void)pokeLongWithInt:(int)arg0 withLong:(NSInteger)arg1 withJavaNioByteOrder:(id)arg2 ;
-(NSInteger)peekLongWithInt:(int)arg0 withJavaNioByteOrder:(id)arg1 ;
-(NSInteger)toLong;
-(id)description;
-(NSInteger)getSize;
+(id)mmapWithJavaIoFileDescriptor:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 withJavaNioChannelsFileChannel_MapMode:(id)arg3 ;
+(id)allocateWithInt:(int)arg0 ;
+(id)wrapFromJniWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif