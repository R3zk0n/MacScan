// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET_CHECKEDENTRYITERATOR_H
#define JAVAUTILCOLLECTIONS_CHECKEDMAP_CHECKEDENTRYSET_CHECKEDENTRYITERATOR_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilCollections_CheckedMap_CheckedEntrySet_CheckedEntryIterator : NSObject <JavaUtilIterator>

 {
    id<JavaUtilIterator> *i_;
    IOSClass *valueType_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilIterator:(id)arg0 withIOSClass:(id)arg1 ;
-(BOOL)hasNext;
-(void)remove;
-(id)next;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif