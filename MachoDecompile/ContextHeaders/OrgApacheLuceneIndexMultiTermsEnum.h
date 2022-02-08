// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTITERMSENUM_H
#define ORGAPACHELUCENEINDEXMULTITERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneIndexMultiTermsEnum_TermMergeQueue.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneUtilBytesRefBuilder.h"

@interface OrgApacheLuceneIndexMultiTermsEnum : OrgApacheLuceneIndexTermsEnum {
    OrgApacheLuceneIndexMultiTermsEnum_TermMergeQueue *queue_;
    IOSObjectArray *subs_;
    IOSObjectArray *currentSubs_;
    IOSObjectArray *top_;
    IOSObjectArray *subDocs_;
    OrgApacheLuceneUtilBytesRef *lastSeek_;
    BOOL lastSeekExact_;
    OrgApacheLuceneUtilBytesRefBuilder *lastSeekScratch_;
    int numTop_;
    int numSubs_;
    OrgApacheLuceneUtilBytesRef *current_;
}




-(int)getMatchCount;
-(id)getMatchArray;
-(id)initWithOrgApacheLuceneIndexReaderSliceArray:(id)arg0 ;
-(id)term;
-(id)resetWithOrgApacheLuceneIndexMultiTermsEnum_TermsEnumIndexArray:(id)arg0 ;
-(BOOL)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(NSInteger)ord;
-(void)pullTop;
-(void)pushTop;
-(id)next;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(id)description;
-(void)dealloc;
+(void)initialize;


@end


#endif