// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTMAP_1ABSTRACTMAPVALUESCOLLECTION_$1_H
#define JAVAUTILABSTRACTMAP_1ABSTRACTMAPVALUESCOLLECTION_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilAbstractMap_1AbstractMapValuesCollection_$1 : NSObject <JavaUtilIterator>

 {
    id<JavaUtilIterator> *setIterator_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithJavaUtilAbstractMap_1AbstractMapValuesCollection:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif