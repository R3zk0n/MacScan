// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILCLOSEABLETHREADLOCAL_H
#define ORGAPACHELUCENEUTILCLOSEABLETHREADLOCAL_H


#import <Foundation/Foundation.h>

#import "JavaLangThreadLocal.h"
#import "JavaUtilConcurrentAtomicAtomicInteger.h"
#import "JavaIoCloseable-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneUtilCloseableThreadLocal : NSObject <JavaIoCloseable>

 {
    JavaLangThreadLocal *t_;
    id<JavaUtilMap> *hardRefs_;
    JavaUtilConcurrentAtomicAtomicInteger *countUntilPurge_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initialValue;
-(id)get;
-(void)setWithId:(id)arg0 ;
-(void)maybePurge;
-(void)purge;
-(void)close;
-(id)init;
-(void)dealloc;


@end


#endif