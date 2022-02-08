// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDLIST_LINK_H
#define JAVAUTILLINKEDLIST_LINK_H


#import <Foundation/Foundation.h>

#import "JavaUtilLinkedList_Link.h"

@interface JavaUtilLinkedList_Link : NSObject {
    id *data_;
    JavaUtilLinkedList_Link *previous_;
    JavaUtilLinkedList_Link *next_;
}




-(id)initWithId:(id)arg0 withJavaUtilLinkedList_Link:(id)arg1 withJavaUtilLinkedList_Link:(id)arg2 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif