// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDLISTITERATOR_H
#define JAVAUTILCOLLECTIONS_CHECKEDLISTITERATOR_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaUtilListIterator-Protocol.h"
#import "JavaUtilListIterator-Protocol.h"

@interface JavaUtilCollections_CheckedListIterator : NSObject <JavaUtilListIterator>

 {
    id<JavaUtilListIterator> *i_;
    IOSClass *type_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilListIterator:(id)arg0 withIOSClass:(id)arg1 ;
-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(BOOL)hasPrevious;
-(id)previous;
-(int)nextIndex;
-(int)previousIndex;
-(void)setWithId:(id)arg0 ;
-(void)addWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif