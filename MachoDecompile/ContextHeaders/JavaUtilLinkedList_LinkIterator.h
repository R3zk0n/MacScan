// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDLIST_LINKITERATOR_H
#define JAVAUTILLINKEDLIST_LINKITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilLinkedList.h"
#import "JavaUtilLinkedList_Link.h"
#import "JavaUtilListIterator-Protocol.h"

@interface JavaUtilLinkedList_LinkIterator : NSObject <JavaUtilListIterator>

 {
    int pos_;
    int expectedModCount_;
    JavaUtilLinkedList *list_;
    JavaUtilLinkedList_Link *link_;
    JavaUtilLinkedList_Link *lastLink_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilLinkedList:(id)arg0 withInt:(int)arg1 ;
-(void)addWithId:(id)arg0 ;
-(BOOL)hasNext;
-(BOOL)hasPrevious;
-(id)next;
-(int)nextIndex;
-(id)previous;
-(int)previousIndex;
-(void)remove;
-(void)setWithId:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif