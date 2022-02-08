// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILREFCOUNT_H
#define ORGAPACHELUCENEUTILREFCOUNT_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentAtomicAtomicInteger.h"

@interface OrgApacheLuceneUtilRefCount : NSObject {
    id *object_;
    JavaUtilConcurrentAtomicAtomicInteger *refCount_;
}




-(id)initWithId:(id)arg0 ;
-(void)release__;
-(void)decRef;
-(id)get;
-(int)getRefCount;
-(void)incRef;
-(void)dealloc;


@end


#endif