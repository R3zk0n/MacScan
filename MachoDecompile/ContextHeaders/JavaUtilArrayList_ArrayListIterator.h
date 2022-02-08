// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILARRAYLIST_ARRAYLISTITERATOR_H
#define JAVAUTILARRAYLIST_ARRAYLISTITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilArrayList.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilArrayList_ArrayListIterator : NSObject <JavaUtilIterator>

 {
    JavaUtilArrayList *this$0_;
    int remaining_;
    int removalIndex_;
    int expectedModCount_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithJavaUtilArrayList:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif