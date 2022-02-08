// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHINDEXSEARCHER_$5_H
#define ORGAPACHELUCENESEARCHINDEXSEARCHER_$5_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchIndexSearcher.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneSearchWeight.h"
#import "JavaUtilConcurrentCallable-Protocol.h"
#import "OrgApacheLuceneSearchCollector-Protocol.h"

@interface OrgApacheLuceneSearchIndexSearcher_$5 : NSObject <JavaUtilConcurrentCallable>

 {
    OrgApacheLuceneSearchIndexSearcher *this$0_;
    IOSObjectArray *val$leaves_;
    OrgApacheLuceneSearchWeight *val$weight_;
    id<OrgApacheLuceneSearchCollector> *val$collector_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)call;
-(id)initWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withOrgApacheLuceneIndexLeafReaderContextArray:(id)arg1 withOrgApacheLuceneSearchWeight:(id)arg2 withOrgApacheLuceneSearchCollector:(id)arg3 ;
-(void)dealloc;


@end


#endif