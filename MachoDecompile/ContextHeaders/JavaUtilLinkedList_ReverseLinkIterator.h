// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDLIST_REVERSELINKITERATOR_H
#define JAVAUTILLINKEDLIST_REVERSELINKITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilLinkedList.h"
#import "JavaUtilLinkedList_Link.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilLinkedList_ReverseLinkIterator : NSObject <JavaUtilIterator>

 {
    int expectedModCount_;
    JavaUtilLinkedList *list_;
    JavaUtilLinkedList_Link *link_;
    BOOL canRemove_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilLinkedList:(id)arg0 withJavaUtilLinkedList:(id)arg1 ;
-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif