// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILCOUNTER_ATOMICCOUNTER_H
#define ORGAPACHELUCENEUTILCOUNTER_ATOMICCOUNTER_H



#import "OrgApacheLuceneUtilCounter.h"
#import "JavaUtilConcurrentAtomicAtomicLong.h"

@interface OrgApacheLuceneUtilCounter_AtomicCounter : OrgApacheLuceneUtilCounter {
    JavaUtilConcurrentAtomicAtomicLong *count_;
}




-(NSInteger)addAndGetWithLong:(NSInteger)arg0 ;
-(NSInteger)get;
-(id)init;
-(void)dealloc;


@end


#endif