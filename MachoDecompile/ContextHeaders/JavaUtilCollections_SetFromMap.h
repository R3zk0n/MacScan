// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_SETFROMMAP_H
#define JAVAUTILCOLLECTIONS_SETFROMMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractSet.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface JavaUtilCollections_SetFromMap : JavaUtilAbstractSet <JavaIoSerializable>

 {
    id<JavaUtilMap> *m_;
    id<JavaUtilSet> *backingSet_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilMap:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(void)clear;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(id)iterator;
-(int)size;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif