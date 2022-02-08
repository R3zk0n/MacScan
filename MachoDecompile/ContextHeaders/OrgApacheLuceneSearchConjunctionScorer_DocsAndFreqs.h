// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONJUNCTIONSCORER_DOCSANDFREQS_H
#define ORGAPACHELUCENESEARCHCONJUNCTIONSCORER_DOCSANDFREQS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchDocIdSetIterator.h"

@interface OrgApacheLuceneSearchConjunctionScorer_DocsAndFreqs : NSObject {
    NSInteger cost_;
    OrgApacheLuceneSearchDocIdSetIterator *iterator_;
    int doc_;
}




-(id)initWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)dealloc;


@end


#endif