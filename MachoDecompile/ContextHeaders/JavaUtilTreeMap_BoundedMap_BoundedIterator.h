// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_BOUNDEDMAP_BOUNDEDITERATOR_H
#define JAVAUTILTREEMAP_BOUNDEDMAP_BOUNDEDITERATOR_H

@class MapIterator;


#import "JavaUtilTreeMap_BoundedMap.h"

@interface JavaUtilTreeMap_BoundedMap_BoundedIterator : MapIterator {
    JavaUtilTreeMap_BoundedMap *this$1_;
}




-(id)initWithJavaUtilTreeMap_BoundedMap:(id)arg0 withJavaUtilTreeMap_Node:(id)arg1 ;
-(id)stepForward;
-(id)stepBackward;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif