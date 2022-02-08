// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_VALUESVIEW_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_VALUESVIEW_H

@class CollectionView;

#import <Foundation/Foundation.h>

#import "JavaUtilCollection-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentConcurrentHashMap_ValuesView : CollectionView <JavaUtilCollection, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilConcurrentConcurrentHashMap:(id)arg0 ;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(id)iterator;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif