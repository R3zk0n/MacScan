// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHEXACTPHRASESCORER_POSTINGSANDPOSITION_H
#define ORGAPACHELUCENESEARCHEXACTPHRASESCORER_POSTINGSANDPOSITION_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexPostingsEnum.h"

@interface OrgApacheLuceneSearchExactPhraseScorer_PostingsAndPosition : NSObject {
    OrgApacheLuceneIndexPostingsEnum *postings_;
    int offset_;
    int freq_;
    int upTo_;
    int pos_;
}




-(id)initWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif