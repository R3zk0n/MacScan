// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTARRAY_H
#define JAVALANGREFLECTARRAY_H


#import <Foundation/Foundation.h>


@interface JavaLangReflectArray : NSObject



-(id)init;
+(id)notAnArrayWithId:(id)arg0 ;
+(id)incompatibleTypeWithId:(id)arg0 ;
+(id)badArrayWithId:(id)arg0 ;
+(id)getWithId:(id)arg0 withInt:(int)arg1 ;
+(BOOL)getBooleanWithId:(id)arg0 withInt:(int)arg1 ;
+(char)getByteWithId:(id)arg0 withInt:(int)arg1 ;
+(unsigned short)getCharWithId:(id)arg0 withInt:(int)arg1 ;
+(CGFloat)getDoubleWithId:(id)arg0 withInt:(int)arg1 ;
+(float)getFloatWithId:(id)arg0 withInt:(int)arg1 ;
+(int)getIntWithId:(id)arg0 withInt:(int)arg1 ;
+(int)getLengthWithId:(id)arg0 ;
+(NSInteger)getLongWithId:(id)arg0 withInt:(int)arg1 ;
+(short)getShortWithId:(id)arg0 withInt:(int)arg1 ;
+(id)newInstanceWithIOSClass:(id)arg0 withIntArray:(id)arg1 ;
+(id)createMultiArrayWithIOSClass:(id)arg0 withIntArray:(id)arg1 ;
+(id)newInstanceWithIOSClass:(id)arg0 withInt:(int)arg1 ;
+(id)createObjectArrayWithIOSClass:(id)arg0 withInt:(int)arg1 ;
+(void)setWithId:(id)arg0 withInt:(int)arg1 withId:(id)arg2 ;
+(void)setBooleanWithId:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(void)setByteWithId:(id)arg0 withInt:(int)arg1 withByte:(char)arg2 ;
+(void)setCharWithId:(id)arg0 withInt:(int)arg1 withChar:(unsigned short)arg2 ;
+(void)setDoubleWithId:(id)arg0 withInt:(int)arg1 withDouble:(CGFloat)arg2 ;
+(void)setFloatWithId:(id)arg0 withInt:(int)arg1 withFloat:(float)arg2 ;
+(void)setIntWithId:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)setLongWithId:(id)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
+(void)setShortWithId:(id)arg0 withInt:(int)arg1 withShort:(short)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif