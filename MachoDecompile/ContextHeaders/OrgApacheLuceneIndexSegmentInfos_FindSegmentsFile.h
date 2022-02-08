// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTINFOS_FINDSEGMENTSFILE_H
#define ORGAPACHELUCENEINDEXSEGMENTINFOS_FINDSEGMENTSFILE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDirectory.h"

@interface OrgApacheLuceneIndexSegmentInfos_FindSegmentsFile : NSObject {
    OrgApacheLuceneStoreDirectory *directory_;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
-(id)run;
-(id)runWithOrgApacheLuceneIndexIndexCommit:(id)arg0 ;
-(void)dealloc;


@end


#endif