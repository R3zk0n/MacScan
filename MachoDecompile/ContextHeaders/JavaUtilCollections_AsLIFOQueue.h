// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_ASLIFOQUEUE_H
#define JAVAUTILCOLLECTIONS_ASLIFOQUEUE_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractQueue.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilDeque-Protocol.h"

@interface JavaUtilCollections_AsLIFOQueue : JavaUtilAbstractQueue <JavaIoSerializable>

 {
    id<JavaUtilDeque> *q_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilDeque:(id)arg0 ;
-(id)iterator;
-(int)size;
-(BOOL)offerWithId:(id)arg0 ;
-(id)peek;
-(id)poll;
-(BOOL)addWithId:(id)arg0 ;
-(void)clear;
-(id)element;
-(id)remove;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif