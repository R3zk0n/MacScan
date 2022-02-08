// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHPHRASEPOSITIONS_H
#define ORGAPACHELUCENESEARCHPHRASEPOSITIONS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "OrgApacheLuceneSearchPhrasePositions.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchPhrasePositions : NSObject {
    int position_;
    int count_;
    int offset_;
    int ord_;
    OrgApacheLuceneIndexPostingsEnum *postings_;
    OrgApacheLuceneSearchPhrasePositions *next_;
    int rptGroup_;
    int rptInd_;
    IOSObjectArray *terms_;
}




-(id)initWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneIndexTermArray:(id)arg3 ;
-(void)firstPosition;
-(BOOL)nextPosition;
-(id)description;
-(void)dealloc;


@end


#endif