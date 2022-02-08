// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTCOREREADERS_TERMVECTORSLOCAL_H
#define ORGAPACHELUCENEINDEXSEGMENTCOREREADERS_TERMVECTORSLOCAL_H



#import "OrgApacheLuceneUtilCloseableThreadLocal.h"
#import "OrgApacheLuceneIndexSegmentCoreReaders.h"

@interface OrgApacheLuceneIndexSegmentCoreReaders_TermVectorsLocal : OrgApacheLuceneUtilCloseableThreadLocal {
    OrgApacheLuceneIndexSegmentCoreReaders *this$0_;
}




-(id)initialValue;
-(id)initWithOrgApacheLuceneIndexSegmentCoreReaders:(id)arg0 ;
-(void)__javaClone;


@end


#endif