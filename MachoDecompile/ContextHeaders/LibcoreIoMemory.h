// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOMEMORY_H
#define LIBCOREIOMEMORY_H


#import <Foundation/Foundation.h>


@interface LibcoreIoMemory : NSObject



-(id)init;
+(int)peekIntWithByteArray:(id)arg0 withInt:(int)arg1 withJavaNioByteOrder:(id)arg2 ;
+(NSInteger)peekLongWithByteArray:(id)arg0 withInt:(int)arg1 withJavaNioByteOrder:(id)arg2 ;
+(short)peekShortWithByteArray:(id)arg0 withInt:(int)arg1 withJavaNioByteOrder:(id)arg2 ;
+(void)pokeIntWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaNioByteOrder:(id)arg3 ;
+(void)pokeLongWithByteArray:(id)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 withJavaNioByteOrder:(id)arg3 ;
+(void)pokeShortWithByteArray:(id)arg0 withInt:(int)arg1 withShort:(short)arg2 withJavaNioByteOrder:(id)arg3 ;
+(void)memmoveWithId:(id)arg0 withInt:(int)arg1 withId:(id)arg2 withInt:(int)arg3 withLong:(NSInteger)arg4 ;
+(char)peekByteWithLong:(NSInteger)arg0 ;
+(int)peekIntWithLong:(NSInteger)arg0 withBoolean:(BOOL)arg1 ;
+(int)peekIntNativeWithLong:(NSInteger)arg0 ;
+(NSInteger)peekLongWithLong:(NSInteger)arg0 withBoolean:(BOOL)arg1 ;
+(NSInteger)peekLongNativeWithLong:(NSInteger)arg0 ;
+(short)peekShortWithLong:(NSInteger)arg0 withBoolean:(BOOL)arg1 ;
+(short)peekShortNativeWithLong:(NSInteger)arg0 ;
+(void)peekByteArrayWithLong:(NSInteger)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)peekCharArrayWithLong:(NSInteger)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)peekDoubleArrayWithLong:(NSInteger)arg0 withDoubleArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)peekFloatArrayWithLong:(NSInteger)arg0 withFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)peekIntArrayWithLong:(NSInteger)arg0 withIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)peekLongArrayWithLong:(NSInteger)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)peekShortArrayWithLong:(NSInteger)arg0 withShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)pokeByteWithLong:(NSInteger)arg0 withByte:(char)arg1 ;
+(void)pokeIntWithLong:(NSInteger)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(void)pokeIntNativeWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(void)pokeLongWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withBoolean:(BOOL)arg2 ;
+(void)pokeLongNativeWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
+(void)pokeShortWithLong:(NSInteger)arg0 withShort:(short)arg1 withBoolean:(BOOL)arg2 ;
+(void)pokeShortNativeWithLong:(NSInteger)arg0 withShort:(short)arg1 ;
+(void)pokeByteArrayWithLong:(NSInteger)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)pokeCharArrayWithLong:(NSInteger)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)pokeDoubleArrayWithLong:(NSInteger)arg0 withDoubleArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)pokeFloatArrayWithLong:(NSInteger)arg0 withFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)pokeIntArrayWithLong:(NSInteger)arg0 withIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)pokeLongArrayWithLong:(NSInteger)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(void)pokeShortArrayWithLong:(NSInteger)arg0 withShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif