// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMAPPINGMULTIPOSTINGSENUM_H
#define ORGAPACHELUCENEINDEXMAPPINGMULTIPOSTINGSENUM_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "OrgApacheLuceneIndexMergeState_DocMap.h"
#import "OrgApacheLuceneIndexMultiPostingsEnum.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexMergeState.h"

@interface OrgApacheLuceneIndexMappingMultiPostingsEnum : OrgApacheLuceneIndexPostingsEnum {
    int numSubs_;
    int upto_;
    OrgApacheLuceneIndexMergeState_DocMap *currentMap_;
    OrgApacheLuceneIndexPostingsEnum *current_;
    int currentBase_;
    int doc_;
    OrgApacheLuceneIndexMultiPostingsEnum *multiDocsAndPositionsEnum_;
    NSString *field_;
    IOSObjectArray *subs_;
    OrgApacheLuceneIndexMergeState *mergeState_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 ;
-(id)resetWithOrgApacheLuceneIndexMultiPostingsEnum:(id)arg0 ;
-(int)getNumSubs;
-(id)getSubs;
-(int)freq;
-(int)docID;
-(int)advanceWithInt:(int)arg0 ;
-(int)nextDoc;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif