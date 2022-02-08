// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTWOPHASEITERATOR_H
#define ORGAPACHELUCENESEARCHTWOPHASEITERATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchDocIdSetIterator.h"

@interface OrgApacheLuceneSearchTwoPhaseIterator : NSObject {
    OrgApacheLuceneSearchDocIdSetIterator *approximation_;
}




-(id)initWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(id)approximation;
-(void)dealloc;
+(id)asDocIdSetIteratorWithOrgApacheLuceneSearchTwoPhaseIterator:(id)arg0 ;
+(id)asTwoPhaseIteratorWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;


@end


#endif