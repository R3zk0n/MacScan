// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef SUNMISCUNSAFE_H
#define SUNMISCUNSAFE_H


#import <Foundation/Foundation.h>


@interface SunMiscUnsafe : NSObject



-(id)init;
-(NSInteger)objectFieldOffsetWithJavaLangReflectField:(id)arg0 ;
-(int)arrayBaseOffsetWithIOSClass:(id)arg0 ;
-(int)arrayIndexScaleWithIOSClass:(id)arg0 ;
-(BOOL)compareAndSwapIntWithId:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(BOOL)compareAndSwapLongWithId:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 ;
-(BOOL)compareAndSwapObjectWithId:(id)arg0 withLong:(NSInteger)arg1 withId:(id)arg2 withId:(id)arg3 ;
-(int)getIntVolatileWithId:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)putIntVolatileWithId:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(NSInteger)getLongVolatileWithId:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)putLongVolatileWithId:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)getObjectVolatileWithId:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)putObjectVolatileWithId:(id)arg0 withLong:(NSInteger)arg1 withId:(id)arg2 ;
-(int)getIntWithId:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)putIntWithId:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)putOrderedIntWithId:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(NSInteger)getLongWithId:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)putLongWithId:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(void)putOrderedLongWithId:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)getObjectWithId:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)putObjectWithId:(id)arg0 withLong:(NSInteger)arg1 withId:(id)arg2 ;
-(void)putOrderedObjectWithId:(id)arg0 withLong:(NSInteger)arg1 withId:(id)arg2 ;
-(void)parkWithBoolean:(BOOL)arg0 withLong:(NSInteger)arg1 ;
-(void)unparkWithId:(id)arg0 ;
-(id)allocateInstanceWithIOSClass:(id)arg0 ;
+(id)getUnsafe;
+(NSInteger)objectFieldOffset0WithJavaLangReflectField:(id)arg0 ;
+(int)getArrayBaseOffsetForComponentTypeWithIOSClass:(id)arg0 ;
+(int)getArrayIndexScaleForComponentTypeWithIOSClass:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif