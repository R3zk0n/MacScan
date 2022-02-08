// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_COLLECTIONVIEW_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_COLLECTIONVIEW_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentConcurrentHashMap.h"
#import "JavaUtilCollection-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentConcurrentHashMap_CollectionView : NSObject <JavaUtilCollection, JavaIoSerializable>

 {
    JavaUtilConcurrentConcurrentHashMap *map_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilConcurrentConcurrentHashMap:(id)arg0 ;
-(id)getMap;
-(void)clear;
-(int)size;
-(BOOL)isEmpty;
-(id)iterator;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif