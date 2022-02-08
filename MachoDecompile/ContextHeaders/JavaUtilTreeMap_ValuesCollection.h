// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_VALUESCOLLECTION_H
#define JAVAUTILTREEMAP_VALUESCOLLECTION_H



#import "JavaUtilAbstractCollection.h"
#import "JavaUtilTreeMap.h"

@interface JavaUtilTreeMap_ValuesCollection : JavaUtilAbstractCollection {
    JavaUtilTreeMap *this$0_;
}




-(int)size;
-(id)iterator;
-(id)initWithJavaUtilTreeMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif