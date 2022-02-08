// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILBITSET_H
#define JAVAUTILBITSET_H


#import <Foundation/Foundation.h>

#import "IOSLongArray.h"
#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface JavaUtilBitSet : NSObject <JavaIoSerializable, NSCopying>

 {
    IOSLongArray *bits_;
    int longCount_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)shrinkSize;
-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithLongArray:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(void)ensureCapacityWithInt:(int)arg0 ;
-(BOOL)getWithInt:(int)arg0 ;
-(void)setWithInt:(int)arg0 ;
-(void)clearWithInt:(int)arg0 ;
-(void)flipWithInt:(int)arg0 ;
-(void)checkIndexWithInt:(int)arg0 ;
-(void)checkRangeWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)getWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(void)setWithInt:(int)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(void)clear;
-(void)setWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)clearWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)flipWithInt:(int)arg0 withInt:(int)arg1 ;
-(BOOL)intersectsWithJavaUtilBitSet:(id)arg0 ;
-(void)and__WithJavaUtilBitSet:(id)arg0 ;
-(void)andNotWithJavaUtilBitSet:(id)arg0 ;
-(void)or__WithJavaUtilBitSet:(id)arg0 ;
-(void)xor__WithJavaUtilBitSet:(id)arg0 ;
-(int)size;
-(int)length;
-(int)nextSetBitWithInt:(int)arg0 ;
-(int)nextClearBitWithInt:(int)arg0 ;
-(int)previousSetBitWithInt:(int)arg0 ;
-(int)previousClearBitWithInt:(int)arg0 ;
-(BOOL)isEmpty;
-(int)cardinality;
-(id)toLongArray;
-(id)toByteArray;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(int)sizeOfLong;
+(id)arrayForBitsWithInt:(int)arg0 ;
+(id)valueOfWithLongArray:(id)arg0 ;
+(id)valueOfWithJavaNioLongBuffer:(id)arg0 ;
+(id)valueOfWithByteArray:(id)arg0 ;
+(id)valueOfWithJavaNioByteBuffer:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif