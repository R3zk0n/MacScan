// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTMAP_1ABSTRACTMAPVALUESCOLLECTION_H
#define JAVAUTILABSTRACTMAP_1ABSTRACTMAPVALUESCOLLECTION_H



#import "JavaUtilAbstractCollection.h"
#import "JavaUtilAbstractMap.h"

@interface JavaUtilAbstractMap_1AbstractMapValuesCollection : JavaUtilAbstractCollection {
    JavaUtilAbstractMap *this$0_;
}




-(int)size;
-(BOOL)containsWithId:(id)arg0 ;
-(id)iterator;
-(id)initWithJavaUtilAbstractMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif