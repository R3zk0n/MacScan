// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_MAPITERATOR_H
#define JAVAUTILTREEMAP_MAPITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilTreeMap_Node.h"
#import "JavaUtilTreeMap.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilTreeMap_MapIterator : NSObject <JavaUtilIterator>

 {
    JavaUtilTreeMap_Node *next_;
    JavaUtilTreeMap_Node *last_;
    int expectedModCount_;
    JavaUtilTreeMap *this$0_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilTreeMap:(id)arg0 withJavaUtilTreeMap_Node:(id)arg1 ;
-(BOOL)hasNext;
-(id)stepForward;
-(id)stepBackward;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif