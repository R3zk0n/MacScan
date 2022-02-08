// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHSET_H
#define JAVAUTILHASHSET_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractSet.h"
#import "JavaUtilHashMap.h"
#import "JavaUtilSet-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilHashSet : JavaUtilAbstractSet <JavaUtilSet, NSCopying, JavaIoSerializable>

 {
    JavaUtilHashMap *backingMap_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(id)initWithJavaUtilHashMap:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(void)clear;
-(id)clone;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)isEmpty;
-(id)iterator;
-(BOOL)removeWithId:(id)arg0 ;
-(int)size;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)createBackingMapWithInt:(int)arg0 withFloat:(float)arg1 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif