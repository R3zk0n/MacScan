// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_$2_H
#define ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_$2_H



#import "OrgApacheLuceneUtilInPlaceMergeSorter.h"
#import "IOSObjectArray.h"
#import "IOSFloatArray.h"

@interface OrgApacheLuceneSearchBlendedTermQuery_$2 : OrgApacheLuceneUtilInPlaceMergeSorter {
    IOSObjectArray *val$terms_;
    IOSObjectArray *val$contexts_;
    IOSFloatArray *val$boosts_;
}




-(void)swapWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithOrgApacheLuceneIndexTermArray:(id)arg0 withOrgApacheLuceneIndexTermContextArray:(id)arg1 withFloatArray:(id)arg2 ;
-(void)dealloc;


@end


#endif