// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHPHRASEQUERY_POSTINGSANDFREQ_H
#define ORGAPACHELUCENESEARCHPHRASEQUERY_POSTINGSANDFREQ_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "IOSObjectArray.h"
#import "JavaLangComparable-Protocol.h"

@interface OrgApacheLuceneSearchPhraseQuery_PostingsAndFreq : NSObject <JavaLangComparable>

 {
    OrgApacheLuceneIndexPostingsEnum *postings_;
    int position_;
    IOSObjectArray *terms_;
    int nTerms_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneIndexTermArray:(id)arg2 ;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif